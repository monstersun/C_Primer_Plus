#include <stdio.h>

int main(void){
    int test[4][2] = {{1,2}, {2,3}, {3,4}, {4,5}};
    int (*ptz) [2];
    ptz = test;
    printf("ptz=%p\n", ptz);
    printf("*ptz=%p\n", ptz[0]);
    return 0;
}