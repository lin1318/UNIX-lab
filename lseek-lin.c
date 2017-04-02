#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main(void){
    off_t currpos=lseek(STDIN_FILENO,0,SEEK_CUR);
    if(lseek(STDIN_FILENO,0,SEEK_CUR)==-1)
         printf("can't no seek\n");
    else{
         printf("can seek\n");
         printf("the seek is %lld\n",(long long)currpos);
    }
    exit(0);
}