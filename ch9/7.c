#include <stdio.h>
int fib(int x);
int main(void){
    int n;
    printf("Please enter an integer, we will generate an fib:(q to quit)\n");
    while(scanf("%d", &n) == 1){
        printf("the fib is:\n");
        for(int i = 1;i <= n;i++){
            printf("%d ", fib(i));
        }
        printf("\nTry again?\n");
    }
    return 0;
}
int fib(int x){
    if(x < 3){
        return 1;
    }
    else
        return fib(x-1) + fib(x-2);
}