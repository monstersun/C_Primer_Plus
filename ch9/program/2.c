#include <stdio.h>
void chline(char ch, int x, int y);
int main(void){
    char ch;
    int x, y;
    printf("enter the char and x, y you want to print:\n")
    while(scanf("%c%d%d", &ch, &x, &y)){
        chline(ch, x, y);
        printf("the next:\n");
    }
    return 0;
}
void chline(char ch, int x, int y){
    
}