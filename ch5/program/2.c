#include <stdio.h>

int main(void){
    int i_enter, i_enterplus;
    printf("enter the numberL:\n");
    scanf("%d", &i_enter);
    i_enterplus = i_enter + 10;
    while (i_enter <= i_enterplus){
        printf("%d\n", i_enter);
        i_enter++;
    }
}