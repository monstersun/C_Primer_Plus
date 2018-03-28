#include <stdio.h>
#include "7.h"

int sets, sides, dices;
int main(void)
{
    puts("Enter the number of sets: enter q to quit.");
    while(scanf("%d", &sets) == 1)
    {
        collect_info();
        show_info();
        puts("The next number of sets: enter q to quit.");
    }
}