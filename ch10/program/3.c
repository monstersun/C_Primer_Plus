#include <stdio.h>
int max(int ar[], int n);
int main(void){
    int ar[5] = {1,2,3,4,5};
    printf("the max of ar is %d.\n", max(ar, 5));
    return 0;
}
int max(int ar[], int n){
    int temp = 0;
    for(int i=0;i<n;i++){
        if(temp < ar[i]){
            temp = ar[i];
        }
    }
    return temp;
}