#include <stdio.h>

int main(void){
    char ch;
    int i = 0;
    printf("enter the chars:\n");
    while((ch = getchar()) != '#'){
        if(i % 8 == 0)
            printf("\n%c:%-3d   ", ch, (int)ch);
        else
            printf("%c:%-3d   ", ch, (int)ch);
        i++;
    }
    return 0;
}