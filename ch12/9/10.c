#include <stdio.h>
#include <time.h>
extern void srand1(unsigned int x);
extern int rand1(void);
int main(void)
{
    int count;
    unsigned seed;
    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        srand1((unsigned int) time(0));
        for(count = 0;count < 5; count++)
            printf("%hd\n", rand1());
      
    }
    printf("Done.\n");
    return 0;
}