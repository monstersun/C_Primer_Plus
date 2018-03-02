#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
    printf("Some number limits for this system:\n");
    printf("Bigges int: %d\n", INT_MAX);
    printf("Smallest int: %d\n", INT_MIN);
    printf("Smallest unsigned long:%ld\n", LLONG_MIN);
    printf("one byte = %d bits on this system\n",
     CHAR_BIT);
    printf("Largest double:%e\n", DBL_MAX);
    printf("Smallest normal float:%e\n",FLT_MIN);
    printf("FLOAT precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
}