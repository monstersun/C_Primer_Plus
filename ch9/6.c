#include <stdio.h>

void to_binary(int x);
int main(void){
    unsigned long number;
    printf("enter an integer:\n");
    while(scanf("%d", &number) == 1){
        printf("the binary number is:\n");
        to_binary(number);
        putchar('\n');
        printf("enter the next number.\n");
    }

    return 0;
}

void to_binary(int x){
    int r;
    r = x % 2;
    if(x >= 2)
        to_binary(x/2);
        putchar('0' + r);
    
    return;

}