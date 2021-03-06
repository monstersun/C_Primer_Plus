#include <stdio.h>
#include <stdbool.h>
#include "2.h"

int mode;
float distance, fuel;
int main(void)
{
    int status, i_mode;

    while(true)
    {
        puts("Please choose the mode of fuel cost");
        puts("0-metric           1-US");
        puts("enter q to quit!");
        status = scanf("%d", &i_mode, 20);
        if(status != 1)
        {
            puts("you should enter number!");
            break;
        }
        else
        {   
            if(i_mode != 1 && i_mode != 0)
            {
                if(i_mode > 1)
                    mode = 1;
                else
                    mode = 0;
                printf("Invalid mode specified. Mode %d (%s) used\n",
                        mode, (mode=1)?"US":"metric");
            }
            else
                mode = i_mode;
            collect_info();
            show_info();
        }
    }
   
    return 0;
}