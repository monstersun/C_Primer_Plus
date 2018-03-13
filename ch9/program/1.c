#include <stdio.h>
double min(double x, double y);
int main(void){
    double x, y;
    printf("enter a pair of numbers:\n");
    while(scanf("%lf%lf", &x, &y) == 2){
        printf("the smaller in %.2f and %.2f is %.2f", x, y, min(x, y));
        printf("the next pair is:\n");
    }
    return 0;
}
double min(double x, double y){
    return (x < y)?x:y;
}