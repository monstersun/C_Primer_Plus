#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
int main(void){
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    gets(flower);
    if(strlen(flower) + strlen(addon) + 1 <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favoriter bug?");
    gets(bug);
    available = BUGSIZE - strlen(bug) - 1;
    strcat(bug, addon);
    puts(bug);
    return 0;
}