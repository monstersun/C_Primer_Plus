#include <stdio.h>

int main(void){
    float f1, f2;
    printf("Please enter the numbers:\n");
    
    while(scanf("%f%f", &f1, &f2) == 2){
        printf("the answer is:%.2f\n",(f1-f2)/f1/f2);
        printf("the next:\n");
    }

    return 0;
}