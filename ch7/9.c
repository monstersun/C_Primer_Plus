#include <stdio.h>

int main(void){
    const float MIN = 0.0F;
    const float MAX = 100.0F;
    float scores, sums=0.0F;
    int n = 0;
    float min = MAX;
    float max = MIN;
    printf("enter the scores:(q to quit.)\n");
    while (scanf("%f", &scores) == 1){
        if(scores < MIN || scores > MAX){
            printf("you enter the invalid number.\n");
            continue;
        }
        printf("you enter the scores:%.1f\n", scores);
        min = (scores < min) ? scores : min;
        max = (scores > max) ? scores : max;
        n++;
        sums += scores;
        printf("the next score:\n");
    }
    if(n > 0){
        printf("you have enter %d valid scores\n", n);
        printf("total scores is: %.1f, average is: %.1f\n", sums, sums/n);
        printf("High:%.1f  Low:%.1f", max, min);
    }
    else
        printf("your scores are all invalid!");

    return 0;
}