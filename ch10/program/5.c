#include <stdio.h>
double max(double ar[], int n);
double min(double ar[], int n);
double dev(double ar[], int n);
int main(void){
    double ar[5] = {1.1, 2.2, 3.2, 5.5, 4.4};
    printf("the dev of ar is %.2f.\n", dev(ar, 5));
    return 0;
}
double max(double ar[], int n){
    double temp = 0;
    for(int i = 0;i<n;i++){
        if(temp<ar[i])
            temp = ar[i];
    }
    return temp;
}
double min(double ar[], int n){
    double temp = 1.0E20;
    for(int i = 0;i<n;i++){
        if(temp > ar[i])
            temp = ar[i];
    }
    return temp;
}
double dev(double ar[], int n){
    return max(ar, n) - min(ar, n);
}