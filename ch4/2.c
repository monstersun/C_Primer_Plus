#include <stdio.h>
#include <string.h>
#define PRASE "What a marvelous name."

int main(void){
    char name[40];
    printf("what is you name?");
    scanf("%s",name);
    printf("hello, %s.%s\n",name, PRASE);
    printf("your name has %d letters and occupies %d bytes in memory.\n",
     strlen(name), sizeof(name));
    printf("the praise has %d letters and occupies %d bytes in memory.", strlen(PRASE), sizeof(PRASE));
}