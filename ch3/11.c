#include<stdio.h>

int main(void){
    float inch = 2.54F;
    float ceti_height;
    printf("enter the height:");
    scanf("%f",&ceti_height);
    printf("your height in inch:%f", ceti_height/inch);
}