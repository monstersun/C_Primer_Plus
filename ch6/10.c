#include <stdio.h>
#define SIZE 10 
#define PAR 72


int main(void){
    int sum, score[SIZE];
    float average;
    printf("enter the scores of GOLF:\n");
    for(int i=0; i<SIZE; i++)
        scanf("%d", &score[i]);
    printf("the scores read in are as follows:\n");
    for (int i=0; i<SIZE;i++)
        printf("%d\n", score[i]);
    for(int i=0; i<SIZE;i++)
        sum += score[i];
    average = (float)sum/SIZE;
    return 0;
}