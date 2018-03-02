#include <stdio.h>
#include <complex.h>

int main(void){
    char a = 'a';
    printf("%d\n%d", sizeof(a),sizeof('a'));
    printf("int:%d", sizeof(1));
    printf("unsigned int:%d", sizeof(1U));
    printf("long:%d",sizeof(1L));
    printf("unsigned long:%d", sizeof(1UL));
    printf("long long size:%d",sizeof(1LL));
    printf("unsigned long long:%d",sizeof(1ULL));
    printf("\n...................\n");
    printf("Float:%d",sizeof(1.F));
    printf("double:%d",sizeof(.123));
    printf("long double:%d", sizeof(.123L));
    printf("\n%d\n",sizeof(long double));
    printf("float complex:%d",sizeof((float complex)1.0));
    printf("double complex:%d", sizeof((double complex)1.0));
    printf("long double complex:%d",sizeof((long double complex)1.0));
}