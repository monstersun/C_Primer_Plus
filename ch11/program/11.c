#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cal(char * string);
int main(void){
    char c_enter[80];
    puts("enter things:");
    while(gets(c_enter) && c_enter[0]!=EOF && c_enter[0]!='\0'){
        cal(c_enter);
    }
}

void cal(char * string){
    int num_words = 0, len = strlen(string), num_up = 0, num_low = 0;
    int num_punc = 0, num_digit;
    int i;
    for(i = 0;i<len;i++){
        if(isspace(string[i]))
            num_words++;
        else if(isupper(string[i]))
            num_up++;
        else if(islower(string[i]))
            num_low++;
        else if(ispunct(string[i]))
            num_punc++;
        else if(isdigit(string[i]))
            num_digit++;
    }
    num_words++;
    printf("This sentence has %d words, %d upper letters %d lower letters %d punctuations %d digits",
           num_words, num_up, num_low, num_punc, num_digit);
    
}