#include <stdio.h>
#define PI 3.1415926

int main(void){
    float circumstence, area, radium;
    printf("enter your pizza's radium:");
    scanf("%f", &radium);
    circumstence = 2 * PI * radium;
    area = PI * radium * radium;
    printf("the pizza's circumstences is %.2f and it's area is %.2f",
     circumstence, area);
}