#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    double d1;
    int n2;
    if(argc != 3)
        puts("the amount of numbers is wrong!");
    else{
        d1 = atof(argv[1]);
        n2 = atoi(argv[2]);
    }

    printf("%.2f", pow(d1, n2));
    
}