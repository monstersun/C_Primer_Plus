#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NAME "CHARSE"
#define SIZE 30
int main(void){
    int i_return;
    char name[SIZE];
    puts("who is buried int that tomb?");
    gets(name);
    for(int i = 0;i<strlen(name);i++)
        name[i] = toupper(name[i]);
    while(i_return = strcmp(name, NAME)){
        puts("that's wrong! Try again!");
        gets(name);
        printf("%d\n", i_return);
    }  
    puts("that is right!");
    return 0;
}