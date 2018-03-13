#include <stdio.h>
void chprint(char ch, int x, int y);
int main(void){
    char ch;
    int x, y;
    printf("enter the things:\n");
    scanf("%c%d%d", &ch, &x, &y);
    chprint(ch, x, y);
    return 0;
}
void chprint(char ch, int x, int y){
    for(int i = 0; i < y;i++){
        for(int j=0;j<x;j++)
            putchar(ch);
        putchar('\n');
    }
    return;
}