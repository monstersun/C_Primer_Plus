#include <stdio.h>

int main(void){
    int nums[9];
    nums[0] = 2;
    int index = 0;
    for(int i=1;i<=8;i++)
        nums[i] = 2*nums[i-1];
    do{
        printf("%d ", nums[index]);
        index += 1;
    }while(index<8);
    return 0;
}