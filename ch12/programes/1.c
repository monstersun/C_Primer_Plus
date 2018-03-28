#include <stdio.h>

void circle(int *);
int main(void)
{
    int units = 0;
    puts("Guess how much i have in my pocket.");
    scanf("%d", &units);
    while(units != 56)
    {
        circle(&units);
    }
    puts("You are so genius!");
    return 0;
}
void circle(int * units)
{
    puts("You are wrong.TRY IT AGAIN!");
    scanf("%d", units);
}