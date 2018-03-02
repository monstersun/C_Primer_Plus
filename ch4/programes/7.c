#include <stdio.h>
#define g2l 3.785F

int main(void){
    const float m2k = 1.609F;
    float gallons, distances;
    printf("Please enter the gallons and distances you have driven\n");
    scanf("%f %f", &gallons, &distances);
    printf("Every gallon can drive %f miles\n", distances/gallons);
    printf("%f", distances*m2k/gallons/g2l);
    return 0;
}