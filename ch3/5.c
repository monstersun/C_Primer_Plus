#include<stdio.h>

int main(void){
    float salary;
    printf("\aenter your desire salary:");
    printf("$_______\b\b\b\b");
    scanf("%f", &salary);
    printf("\rmonthly:%.2f,yearly:%.2f",salary, salary*12);

}