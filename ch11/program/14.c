#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>  

int atoi(char * string);
bool is_digit(char * string);
int main(void){
    char digit[81];
    puts("enter the number:");
    while(gets(digit) && digit[0] != EOF && digit[0] != '\0'){
        printf("%s is: %d", digit, atoi(digit));
    }
}
bool is_digit(char * string){
    int len = strlen(string);
    for(int i = 0;i < len;i++){
        if(!isdigit(string[i]))
            return false;
    }
    return true;
}
int atoi(char * string){
    int len = strlen(string);
    int num = 0;
    if(!is_digit(string))
        printf("the format of what you enter is wrong!");
    else{
        
        for(int i = 0;i<len;i++){
            printf("%c", string[i]);
            num = string[i] * pow(10, len-1-i);
        }
        return num;
    }
}