#include <stdio.h>

int main(void){
    int nums[9], nums_f[9];
    printf("Please enter 8 numbers:\n");
    for(int i=0;i<8;i++)
        scanf("%d", &nums[i]);
    for(int i=7;i>=0;i--)
        printf("%d\n", nums[i]);
    getchar();
}