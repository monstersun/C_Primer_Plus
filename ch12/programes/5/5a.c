#include <stdio.h>
#include <stdlib.h>
#include "5.h"

void generate()
{
    for(int i = 0;i<LENGTH;i++)
    {
        ran_number[i] = rand_10();
    }
}
int rand_10()
{
    return rand() % 10 + 1;
}
void rank()
{

    int i;
    for(i = 0;i < LENGTH-1;i++)
    {
        for(int j = i;j < LENGTH;j++)
        {
            if(ran_number[i] > ran_number[j])
                exchange(&ran_number[i], &ran_number[j]);
        }
    }
}
void exchange(int * bigger, int * smaller)
{

    int temp;
    temp = *bigger;
    *bigger = *smaller;
    *smaller = temp;

}