#include<stdlib.h>
#include<stdio.h>
int main(void){
    int c;
    while((c=getc(stdin))!=EOF)
        if(putc(c,stdout)==EOF)
            puts("output error");
    if(ferror(stdin))
       puts("input error");
       exit(0);
}