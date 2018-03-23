#include <stdio.h>
#include <string.h>
#define LIM 10
#define SIZE 81
#define STOP "quit"
int main(void){ 
    char input[LIM][SIZE];
    int ct = 0;
    printf("enter up to %d lines (type quit to quit):\n", LIM);
    while(ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct], STOP) && input[ct][0] != '\0')
        ct++;
    return 0;
}