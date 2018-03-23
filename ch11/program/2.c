#include <stdio.h>
#define LEN 10

char * get1(char * string, int n);
int main(void){
    char string[LEN];
    char * check;
    check = get1(string, LEN-1);
    if(check == NULL)
        puts("invalid input.");
    else
        puts(string);
    return 0;
}
char * get1(char * string, int n){
    int i;
    char ch;
    for(i = 0;i<n;i++){
        ch = getchar();
        if(ch == EOF)
            break;
        else if(ch != ' ' && ch != '\t' && ch != '\n')
            string[i] = ch;
        else
            break;
    }
    if(ch == EOF)
        return NULL;
    string[i] = '\0';
    return string;

}