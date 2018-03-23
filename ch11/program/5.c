#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_within(char ch, char * string);
int main(void){
    char string[80];
    char ch, fz;
    puts("enter the words:");
    while(gets(string) && string[0] != '\0')
    {
        puts("enter the character:");
        ch = getchar();
        while((fz = getchar()) != '\n')
            continue;
        if(is_within(ch, string))
            puts("yeah!");
        else
            puts("nah!");
        puts("enter the words:");
    }
}
bool is_within(char ch, char * string){
    for(int i = 0;i<strlen(string);i++){
        if(ch == string[i])
            return true;
    }
    return false;
}