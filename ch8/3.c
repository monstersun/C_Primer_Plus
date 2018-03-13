#include <stdio.h>

int main(void){
    int guess = 0;
    char ch;
    printf("think about an number.I will guess it.\n");
    printf("I guess it is %d", ++guess);
    while((ch = getchar()) != 'y'){
        if(ch == 'n')
            printf("well, is it %d", ++guess);
        else
            printf("sorry, it only accept 'y' and 'n'");
        while(getchar() != '\n')
            continue;
    }
    return 0;
}