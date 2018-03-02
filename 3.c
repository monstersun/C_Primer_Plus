#include<stdio.h>

int main(){
    int a = 010;
    int b = 0x10;
    char c = 0x61;
    char c1 = 'a';
    char c2 = '\x61';
    printf("%d%d\n",a,b);
    printf("%c %c %c", c,c1,c2);
}