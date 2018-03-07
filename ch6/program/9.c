#include <stdio.h>

int cal(int x1, int x2);

int main(void){
    int x1, x2;
    printf("Please enter the lower limit and the upper limit:\n");
    while(scanf("%d%d", &x1, &x2) == 2){
        printf("the sum of the squares form %d to %d is %d\n", x1*x1, x2*x2, cal(x1, x2));
        printf("the next set of limits\n");
    }
    return 0;
}

int cal(int x1, int x2){
    int sum=0;
    for(int i=x1;i<=x2;i++)
        sum += i*i;
    return sum;
}