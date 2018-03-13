#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ch;
    char fname[50];
    FILE * fp;
    printf("enter the file name.\n");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if(fp == NULL){
        printf("the %s doesm't exists!\n", fname);
        exit(1);
    }
    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}