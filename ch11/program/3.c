#include <stdio.h>
#define LEN 10
int get1(char * string);
int main(void){
    char string[LEN];
    int check;
    check = get1(string);
    if(!check)
        puts("invalid enter");
    else
        puts(string);
    return 0;
}
int get1(char * string){//取第一个单词
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n'){
        if(ch == ' '||ch == '\t'||ch == EOF)
            break;
        string[i] = ch;
        i++;
    }
    return i;
}