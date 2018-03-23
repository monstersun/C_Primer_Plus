#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char * string_in(char *, char *);
void puts_in(char *, char *, int);

int main(void){
    char string[81];
    char string2[81];
    int i;
    puts("Enter the father words:(space to quit)");
    while(gets(string) && string[0] != '\0'){
        puts("enter the son words");
        gets(string2);
        puts_in(string, string2, i);
    }
   
    return 0;
}
char * string_in(char *str1, char *str2)
{
    int i, j;
    if(strlen(str2) < strlen(str1)){
        for( i = 0;i<strlen(str1);i++){
            if(str1[i] == str2[0]){
                for( j = 1;j<strlen(str2);j++){
                    if(str1[i+j] != str2[j]){
                        break;
                    }
                }
                if( j == strlen(str2)){
                    return str1+i;
                }
            }
        
        }
        if(i == strlen(str1)){
            return NULL;
        }
    }
    else
        return NULL;
    
}

void puts_in(char * str1, char * str2, int i){
    char * temp;
    puts("The result is listed as follows:");
    puts(str1);
    puts(str2);
    temp = string_in(str1, str2);
    if(temp){
        puts(temp);
        i = temp - str1;
        printf("The location is %d\n", i + 1);
        puts("The next:(space to quit)");
    }
    else{
        puts("Error, the next:(space to quit)");
    }
}

