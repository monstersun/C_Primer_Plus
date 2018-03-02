/*说明舍入误差*/
#include <stdio.h>
int main(){
    float a,b;
    a = 2.0e20 + 1.0;
    b = a - 2.0e20;
    printf("%f",b);
}