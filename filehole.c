#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#define FILE_MODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)
char buf1[]="abcdefg";
char buf2[]="ABCDEFG";
int main(void ){
    int fd;
    if((fd=creat("file.hole",FILE_MODE))<0)
        puts("create error");
    if(write(fd,buf1,7)!=7)
       puts("write buf1 error");
    if((lseek(fd,16384,SEEK_SET)==-1))
      puts("lseek error");
    if(write(fd,buf2,7)!=7)
       puts("write buf2 error");
    exit(0);
}