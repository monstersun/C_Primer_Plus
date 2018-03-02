#include <stdio.h>
int main(void){
    float age_second;
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    age_second = age * 3.156e7F;
    printf("your age in seconds :%f\n",age_second);
}