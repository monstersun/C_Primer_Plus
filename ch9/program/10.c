#include <stdio.h>
int Fib(int n);
int main(void){
    int x;
    printf("enter the number:\n");
    while(scanf("%d", &x) == 1){
        for(int i=1;i<=x;i++)
            printf("%d ", Fib(i));
        printf("\nThe next:\n");
    }
    return 0;
}
int Fib(int n){
    int a1, a2, a3;
    if(n==1 || n==2)
        return 1;
    else if (n > 2)
        a1 = a2 = 1;

        for(int i = 3; i<=n;i++){
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        return a3;
    
}