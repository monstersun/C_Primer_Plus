#include <stdio.h>
#include <string.h>
char * strncpy1(char *, char *, int n);
int main(void){
    char s1[20];
    char *s2 = "hello world!";
    char * check;
    check = strncpy1(s1, s2, 10);
    puts(s2);
    puts(s1);
    puts(check);
    return 0;
}

char * strncpy1(char * s1, char * s2, int n)
{
    int len2 = strlen(s2);
    int i;
    if(len2 >= n){
        for(i = 0; i< n; i++){
            s1[i] = s2[i];
        }
        s1[i] = '\0';
    }   
    else{
        for(i = 0; i<len2;i++){
            s1[i] = s2[i];
        }
        s1[i] = '\0';
    }
    return s1;
}