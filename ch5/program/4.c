#include <stdio.h>

#define i2c 2.54
#define f2i 12

int main(void){
    int i_height_c = 1;
    float f_height_i;
    while(i_height_c > 0){
        printf("enter your height:\n");
        scanf("%d", &i_height_c);
        f_height_i = i_height_c/ i2c;
        printf("%.1f cm = %d feet, %.1f inches",(float) i_height_c,
         (int) f_height_i/f2i, f_height_i - (int) f_height_i/f2i*12);
        
    }   
}   



