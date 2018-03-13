#include <stdio.h>

void up_and_down(int x);
int main(void){
    up_and_down(1);
    return 0;
}

void up_and_down(int x){
    printf("Level %d: n location %p\n", x, &x);
    if(x<4)
        up_and_down(x+1);
    printf("Level %d: n location %p\n", x, &x);
}