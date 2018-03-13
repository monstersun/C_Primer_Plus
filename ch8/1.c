#include <stdio.h>

int main(void){
    int ch;
    printf("enter:\n");
    while((ch = getchar()) != EOF){
        putchar(ch);
    }
    return 0;
}