#include <stdio.h>

int main(void){
    int i_enter;
    printf("enter the number:\n");
    scanf("%d", &i_enter);
    while(i_enter > 0){
        printf("the sum:%d\n", (i_enter + 1)*i_enter/2);
        printf("enter the number:\n");
        scanf("%d", &i_enter);
    }
    return 0;
}