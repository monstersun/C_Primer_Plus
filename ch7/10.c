#include <stdio.h>

int main(void){
    float length, width;
    printf("enter the length of the rectangle:\n");
    while(scanf("%f", &length) == 1){
        printf("enter the width of the rectangle:\n");
        if(scanf("%f", &width) != 1)
            break;
        printf("Length:%.2f  width:%.2f\n", length, width);
        printf("The area:%.2f\n", length * width);
        printf("enter the length of the rectangle:\n");  
    }
    printf("Done!\n");
    return 0;
}