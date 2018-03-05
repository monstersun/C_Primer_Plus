#include <stdio.h>

int f_cube(float f){
    return f*f*f;
}

int main(void){
    float f_enter = 1.0;
    float f_result;
    while(f_enter > 0){
        printf("enter the number:(0 to quit)\n");
        scanf("%f", &f_enter);
        f_result = f_cube(f_enter);
        printf("%.2f\n", f_result);
    }
}