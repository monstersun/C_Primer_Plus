#include <stdio.h>
#include <float.h>

int main(void){
    double n1 = 1.0/3.0;
    float n2 = 1.0/3.0;
    printf("%20.4f  %20.4f\n", n1, n2);
    printf("%20.8f  %20.8f\n", n1, n2);
    printf("%20.12f  %20.12f\n", n1, n2);
    printf("%20f  %20f\n", FLT_DIG, DBL_DIG);
}