#include <stdio.h>
#include <string.h>
#define WIDTH 40
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 MEGABUCK Plazza."
#define PLACE "Megapolis, CA 94094"
#define SPACE ' '

void show_n_char(char ch, int x);

int main(void){
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, (WIDTH - strlen(NAME))/2);
    printf("%s\n", NAME);
    show_n_char(SPACE, (WIDTH-strlen(ADDRESS))/2);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH-strlen(PLACE))/2);
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    return 0;
}

void show_n_char(char ch, int x){
    for(int i=0;i<x;i++)
        putchar(ch);
}