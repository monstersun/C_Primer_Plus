#include <stdio.h>
#define day2week 7
int main(void){
    int i_enter = 1;
   
    while(i_enter > 0){
        printf("enter the days:\n");
        scanf("%d", &i_enter);
        printf("week:%d day:%d\n", i_enter/day2week, i_enter%day2week);
    }
}