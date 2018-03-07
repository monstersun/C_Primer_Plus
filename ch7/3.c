#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch += 1;
            putchar(ch);
        }
        else
            putchar(ch);
    }
    return 0;
}