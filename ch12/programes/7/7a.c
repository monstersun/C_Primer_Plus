#include <stdio.h>
#include <stdlib.h>
#include "7.h"
void collect_info()
{
    puts("How many side and how many dice?");
    while(scanf("%d%d", &sides, &dices) != 2)
        puts("Please enter numbers!");
}
void show_info()
{
    int i, j;
    for(i = 0; i < sets; i++)
    {
        int temp = 0;
        for(j = 0;j < dices;j++)
        {
            temp += rand_side();
        }
        printf("%d ", temp);
    }
    putchar('\n');

}
int rand_side()
{
    return rand() % sides + 1;
}