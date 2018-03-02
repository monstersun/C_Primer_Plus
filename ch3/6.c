#include <stdio.h>

int main(void){
    short a = 32767;
    short b;
    float f1 = 3.4e38;
    float f2 = 3.4e-38;
    f1 = f1 * 2;
    f2 = f2 / 1000;
    b = a + 1;
    printf("a:%hd\nb:%hd\n",a,b);
    printf("f1:%e\n",f1);
    printf("f2:%e",f2);
}