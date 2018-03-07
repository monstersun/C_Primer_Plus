#include <stdio.h>
//研究何时停止循环
int main(void){
    int n =5;
    while (n<7){
        printf("n=%d", n);
        n++;
        printf("now n = %d", n);
    }
    printf("over!");
}