#include <stdio.h>

int main(void){
    float about = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.e-5;
    printf("%e can be written as %f\n",about, about);
    printf("%e can be written as %f\n",abet, abet);
    printf("%e can be written as %f\n",dip, dip);
    printf("%Le can be written as %Lf\n",dip, dip);
    return 0;
}