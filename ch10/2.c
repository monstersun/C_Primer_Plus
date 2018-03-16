#include <stdio.h>

int sum(int *ar);
int main(void){
    int array[10] = {1,2,3,4,5};
    printf("the sum of array is %d", sum(array));
    return 0;
}

int sum(int *ar){
    int total = 0;
    for(int i = 0;i<10;i++){
        total += *(ar + i);
        //total += ar[i];
    }
    return total;
}
