#include <stdio.h>
#include <string.h>
void delete_element(char * string, int );
int char_times(char * string, char ch);
void delete_space(char * string, char ch);
int main(void){
    char string[81];
    puts("enter the words you want to delete the space.");
    while(gets(string) && string[0]!='\0'){
        puts(string);
        delete_space(string, ' ');
        puts(string);
        puts("The next:");
    }
    return 0;
}
int char_times(char * string, char ch){
    int len = strlen(string);
    for(int i = 0;i<len;i++){
        if(string[i] == ch)
            return i;
    }
    return 0;
}
void delete_element(char * string, int n){
    int len = strlen(string);
    int i;
    if(n > len || n < 0){
        puts("Error");
    }
    for(i = n;i<len-1;i++){
        string[i] = string[i+1];
    }
    string[i] = '\0';
}
void delete_space(char * string, char ch){
    int i;
    while(i = char_times(string, ch)){
        delete_element(string, i);
    }
}