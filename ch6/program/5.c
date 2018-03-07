#include <stdio.h>

int main(void){
    int i_max, i_min, status;
    printf("Please enter the max of number and the min of number:\n");
    status = scanf("%d%d",&i_max, &i_min);

    if(status == 2){
        for(int i=i_min;i<=i_max;i++)
            printf("%10d%10d%10d\n", i, i*i, i*i*i);
    }
    return 0;
}