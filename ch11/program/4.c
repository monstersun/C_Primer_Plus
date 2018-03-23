#include <stdio.h>
#include <string.h>
char * strch(char * string, char ch);
int main(void){
    char string[80];
    char ch;
    int status1, status2;
    char * ptr;
    do{
        puts("enter the words you want to search.(press space to end)");
        gets(string);
        puts("enter the charactor:");
        ch = getchar();
        ptr = strch(string, ch);
        if(ptr != NULL)
            printf("start：%p,  pointer: %p,  value:%1s\n",string, ptr, ptr);
        else
            puts("Can not find!");
   }while(string != NULL && ch != 0);

    puts("Bye.");
    return 0;
}
char * strch( char * string, char ch){
    for(int i = 0;i<strlen(string);i++){
        if(string[i] == ch)
            return string+i;
    }
    return NULL;
}