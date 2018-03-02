#include <stdio.h>
int main(void){
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes , int has %zd bytes", n, sizeof n, intsize);
    return 0;
}