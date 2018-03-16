#include <stdio.h>
double max(double ar[], int n);
int find_index(double ar[], int n);
int main(void){
    double ar[5] = {1.1, 2.2, 3.2, 5.5, 4.4};
    printf("the index of max in ar is %d\n", find_index(ar, 5));
    return 0;
}
double max(double ar[], int n){
    double temp = 0;
    for (int i = 0;i<n;i++){
        if(temp < ar[i]){
            temp = ar[i];
        }
    }
    return temp;
}
int find_index(double ar[], int n){
    double temp;
    temp = max(ar, n);
    for (int i=0;i<n;i++){
        if(ar[i] == temp)
            return i;
    }
}