#include <stdio.h>

double cal(double x, double y);
int main(void){
    double x, y;
    printf("enter two numbers:\n");
    scanf("%lf%lf", &x, &y);
    printf("the answer is: %.2f\n", cal(x, y));
    return 0;
}
double cal(double x, double y){
    return 2/(1/x + 1/y);
}