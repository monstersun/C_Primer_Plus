#include <stdio.h>

int main(void){
    int a = 1, b =1;
    int aplus, bplus;
    int aminus, bminus;
    int num = 0;
    aplus = a++;
    bplus = ++b;
    a = b = 1;
    aminus = a--;
    bminus = --b;
    printf("aplus bplus aminus bminus\n");
    printf("%3d%6d%6d%6d\n", aplus, bplus, aminus, bminus);
    while(num<21){
        printf("%10d%10d\n", num, num*num++);
    }
} 