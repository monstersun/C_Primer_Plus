#include <stdio.h>

int main(void){
    _Bool input_is_good;
    int n;
    printf("enter the number:\n");
    input_is_good = scanf("%d", &n);
    printf("%d", input_is_good);
    return 0;
}