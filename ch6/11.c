#include <stdio.h>
//计算数值的整数次幂
double Power(float x, int n){
    float f_pow = 1.0;
    for (int i=0;i<n;i++)
        f_pow *= x;
    return f_pow;
}
int main(void){
    float f_enter;
    int i_enter, status;
    do{
        printf("enter the number:\n");
        status = scanf("%f%d", &f_enter, &i_enter);
        printf("%.2f", Power(f_enter, i_enter));
    }while(status);
    
    return 0;
}