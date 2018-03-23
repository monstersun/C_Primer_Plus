#include <stdio.h>
void put1(const char * string);
int main(void){
    char str[] = "nihao";
    put1(str);
    put1("hello world");
    return 0;
}
void put1(const char * string){
    while (*string != '\0'){
        putchar(*string++);
    }
}