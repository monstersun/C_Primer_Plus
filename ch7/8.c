#include <stdio.h>
#define COVERAGE 200

int main(void){
    int cans, squart_feet;
    printf("enter number of suqart feet you want to paint:\n");
    while(scanf("%d", &squart_feet) == 1){
        cans = squart_feet / COVERAGE;
        cans += (squart_feet % COVERAGE == 0) ? 0 : 1;
        printf("you need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("the next number:");
    }
    return 0;
}