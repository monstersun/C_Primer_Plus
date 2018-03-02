#include <stdio.h>
#define ADJUST 7.64
int main(void){
    const float SCALE = 0.325;
    float shoe = 3.0;
    float length;
    printf("SHOE SIZE FOOT LENGTH\n");
    while(shoe < 18.0){
        length = SCALE * shoe + ADJUST;
        printf("%9.1f %11.2f\n",shoe, length);
        shoe = shoe + 1;
    }

}