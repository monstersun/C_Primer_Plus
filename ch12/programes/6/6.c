#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "6.h"

int count_array[10];
int main(void)
{
    int seed;
    for(int i = 0;i<10;i++)
    {
        seed = rand();
        srand(seed);
        init_count();
        count_times();
        show_array();
    }

}