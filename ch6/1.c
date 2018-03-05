#include <stdio.h>

int main(void){
    long sum = 0L, num;
    int status;
    printf("enter the number(q to quit):\n");
    status = scanf("%ld", &num);
    while(status == 1){
        sum = sum + num;
        printf("enter the number(q to quit):\n");
        status = scanf("%ld", &num);
    }
    printf("%ld\n", sum);
    return 0;
}