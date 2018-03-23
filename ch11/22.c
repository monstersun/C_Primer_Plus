#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 80
void Toupper(char *);
int PunctCount (const char *);

int main(void){

    char line[LIMIT];

    puts("Please enter a line:");
    gets(line);
    Toupper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    return 0;
}
void Toupper(char * string){
    for(int i = 0;i<strlen(string);i++)
        string[i] = toupper(string[i]);
}
int PunctCount(const char * string){
    int count = 0;
    for(int i = 0;i<strlen(string);i++){
        if(ispunct(string[i]))
            count++;
    }
    return count;
}