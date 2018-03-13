#include <stdio.h>

int imin(int x, int y);
int main(void){
    int evil1, evil2;
    printf("Enter pair of integers(q to quit):\n");
    while(scanf("%d%d", &evil1, &evil2) == 2){
        printf("the lesser of %d and %d is %d\n", evil1, evil2, imin(evil1, evil2));
        printf("the next pair;\n");
    }
    return 0;
}

int imin(int x, int y){
    return (double)(x < y)?x:y;
}