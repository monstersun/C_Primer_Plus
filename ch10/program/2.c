#include <stdio.h>
#define COLS 5
void copy_arr(double ar[], double tr[], int n);
void copy_prr(double ar[], double tr[], int n);
void show_arr(double ar[], int n);
int main(void){
    double source[COLS] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[COLS];
    double target2[COLS];
    copy_arr(source, target1, COLS);
    copy_prr(source, target2, COLS);
    show_arr(source, COLS);
    show_arr(target1, COLS);
    show_arr(target2, COLS);
    return 0;
}
void copy_arr(double ar[],double tr[], int n){
    for(int i = 0;i<n;i++){
        tr[i] = ar[i];
    }
}
void copy_prr(double ar[], double tr[], int n){
    for(int i=0;i<n;i++){
        *(tr+i) = *(ar+i);
    }
}
void show_arr(double ar[], int n){
    for(int i = 0;i<n;i++){
        printf("%.2f  ", ar[i]);
    }
    printf("\n");
}