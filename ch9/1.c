#include <stdio.h>
void starbar(int x);
int main(void){
    starbar(40);
    printf("dfafdafafdfafas\n");
    starbar(40);
    return 0;
}
void starbar(int x){
    for (int i=0;i<x;i++)
        putchar('*');
    putchar('\n');
}