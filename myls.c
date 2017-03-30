#include<dirent.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *args[]){
    DIR *sima;
    struct dirent *dalao;
    if(argc!=2)
       printf("usgae: directory_name");
       sima=opendir(args[1]);
    if(sima==NULL)
       printf("Can't open %s",args[1]);
    while((dalao=readdir(sima))!=NULL){
        printf("%s\n",dalao->d_name);
    }
    closedir(sima);
    exit(0);
} 