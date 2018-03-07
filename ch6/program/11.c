#include <stdio.h>
#include <math.h>

int main(void){
    float answer1, answer2;
    long times;
    printf("enter the times:\n");
    while(scanf("%lld", &times) == 1){
        for(int i =1;i<=times;i++){
            answer1 += 1.0/(float)i;
        }
        for(int i=1;i<=times;i++)
            answer2 += pow(-1.0, i)/(float)i;
        printf("answer1:%.2f\nanswer2:%.2f\n", answer1, answer2);
    }
    
    return 0;
}