#include <stdio.h>

int main(void){
    char ch;
    int times_change = 0;
    while((ch = getchar()) != '#'){
        if(ch == '!'){
            ch = '.';
            times_change++;
        }
        else if(ch == '.'){
            ch = '!';
            times_change++;
        }
        putchar(ch);
    }
    printf("change %d times", times_change);
    return 0;
}