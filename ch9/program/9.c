#include <stdio.h>

void to_base_n(int x, int y);
int main(void){
    int x, y;
    printf("enter two number\n");
    while(scanf("%d%d", &x, &y) == 2){
        to_base_n(x, y);
        putchar('\n');
        printf("enter the next number.\n");
    }
    return 0;
}
void to_base_n(int x, int y){
    int r;
    r = x % y;
    if(x/y != 0)
        to_base_n(x/y, y);
    putchar('0'+ r);
    return;
}