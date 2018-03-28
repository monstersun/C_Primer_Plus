#include <stdio.h>
int fun1();
int static count = 0;
int main(void)
{
    int times;

    printf("Enter times you want to execute the function:q to quit\n");
    while(scanf("%d", &times) == 1)
    {   
        printf("Loop %d, the function has been executed %d times", count, fun1());
    }
  
    return 0;
}
int fun1()
{

    count++;
    return count;
}
