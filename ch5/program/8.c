#include <stdio.h>


void Tempratures(double d_enter){
    const float TEP_ABS = 273.16;
    const float F2C_F = 1.8;
    const float F2C_C = 32.0;
    float celsius, kelvin;
    celsius = F2C_F * d_enter + F2C_C;
    kelvin = celsius + TEP_ABS;
    printf("Celsius: %.2f  Kelvin: %.2f\n", celsius, kelvin);
}

int main(void){
    int i_scanf = 1;
    double d_enter;
    while(i_scanf){
        printf("enter the temprature:\n");
        i_scanf = scanf("%lf", &d_enter);
        printf("%d %f\n", i_scanf, d_enter);
        Tempratures(d_enter);
    }
    return 0;
}