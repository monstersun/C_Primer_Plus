#include <stdio.h>

char * get1(char * string, int n);
int main(void){
    char string[80];
    char * check;

    check = get1(string, 10);
    if(check == NULL)
        puts("Invalid input");
    else
        puts(string);
    return 0;
}
char * get1(char * string, int n){
    int i;
    char ch;
    for(i = 0;i < n;i++){
        ch = getchar();
        if(ch == EOF)
            break;
        else
            string[i] = ch;
    }
    if(ch == EOF)
        return NULL;
    string[i] = '\0';

    return string;
}