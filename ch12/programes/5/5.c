#include <stdio.h>
#include "5.h"

int ran_number[LENGTH];

int main(void)
{
    int i = 0;
    generate();
    rank();
    for(i = 0;i<LENGTH;i++)
    {
        printf("%3d", ran_number[i]);
        if(i % 10 == 9)
            putchar('\n');   
    }
    return 0;
}