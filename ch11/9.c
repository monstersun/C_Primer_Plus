#include <stdio.h>
int put2(const char * string);
int main(void){
    char * str1 = "nihao";
    int count;
    count = put2(str1);
    printf("%d\n", count);
    return 0;
}
int put2(const char * string){
    int count = 0;
    while(*string){
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}