#include <stdio.h>
float cal(float a, float b);
int main(void){
    float f1, f2;
    printf("Please enter the numbers:\n");
    while(scanf("%f%f", &f1, &f2) == 2){
        printf("the answer is :%.2f\n", cal(f1,f2));
        printf("the next:\n");
    }
    return 0;
}

float cal(float a, float b){
    return (a-b)/a/b;
}