#include <stdio.h>
#include <stdlib.h>
#include "6.h"
void count_times()
{
    int num, i;
    for(i = 0; i < TIMES; i++)
    {
        num = rand_10();
        count_array[num-1]++;
    }
}
int rand_10()
{
    return rand() % 10 + 1;
}
void init_count()
{
    for(int i = 0;i<10;i++)
        count_array[i] = 0;
}
void show_array()
{
    int i;
    for(i = 0;i<10;i++)
    {
        printf("%d  ", count_array[i]);
    }
    printf("\n");
}