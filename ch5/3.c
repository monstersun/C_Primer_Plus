#include <stdio.h>
int main(void){
    int i = 0;
    printf("i i的平方\n");
    while(i<=20){
        printf("%d%4d\n", i, i*i);
        i = i + 1;
    }
    return 0;
}