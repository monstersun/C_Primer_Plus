#include <stdio.h>
void cal_sqt(int n){
    int i = 0, sum = 0;
    while(++i <= n){
        sum = sum + i*i;
    }
    printf("%d\n", sum);
}

int main(void){
    int num = 1;
    while(num > 0){
        printf("enter the number:\n");
        scanf("%d", &num);
        cal_sqt(num);   
    }
    return 0;
}