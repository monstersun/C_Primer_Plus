#include <stdio.h>

void larger_of(double *x, double *y);
int main(void){
    double  x, y;
    printf("enter two numbers:\n");
    scanf("%lf%lf", &x, &y);
    larger_of(&x, &y);
    printf("the larger of two is:%.2f%.2f\n", x, y);
    return 0;   
}
void larger_of(double *x, double *y){
    double temp;
    if(*x>*y){
        *y = *x;
    }
    else
        *x = *y;
}