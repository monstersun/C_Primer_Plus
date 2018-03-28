#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * ptd;
    int number, max;
    int i = 0;
    puts("What is the maxmium of type double entries.");
    scanf("%d", &max);
    ptd = (double *)malloc(max * sizeof(double));
    if(ptd == NULL)
    {
        puts("Memories allocation falied.Now end the programe.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values.(q to quit)");
    while(i<max && scanf("%lf", &ptd[i]))
        ++i;
    printf("Here are your %d entries.\n", number = i);
    for(i = 0;i < number; i++){
        printf("%7.2f", ptd[i]);
        if(i % 7 == 6)
            putchar('\n');
    }
    if(i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);
    return 0;
}