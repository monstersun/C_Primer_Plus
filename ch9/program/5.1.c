#include <stdio.h>

void larger_of(double *x, double *y);
int main(void){
    double * x;
    double * y;
    double x1, y1;
    x = &x1;
    y = &y1;
    printf("enter two number:\n");
    printf("%p\n%p\n", x, y);
    scanf("%lf%lf", x, y);
    printf("two number is:%.2f%.2f\n", *x, *y);
    larger_of(x, y);
    printf("now:%.2f%.2f\n", *x, *y);
    return 0;
}
void larger_of(double *x, double *y){
    if(*x > *y)
        *y = *x;
    else
        *x = *y;
}