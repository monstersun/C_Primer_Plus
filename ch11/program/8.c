#include <stdio.h>
#include <string.h>

void turn_over(char * , char *);
int main(void){
    char source[81];
    char target[81];
    puts("Enter the words you want to turn over:(space line to quit)");
    while(gets(source) && source[0] != '\0'){
        puts("The result is:");
        turn_over(target, source);
        puts(target);
        puts("The next:");
    }
    return 0;
}
void turn_over(char * target, char * source){
    int i;
    int len = strlen(source);
    for(i = len-1;i >= 0;i--){
        target[len - i - 1] = source[i];
    }
    target[len] = '\0'; 
}