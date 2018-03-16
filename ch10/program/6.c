#include <stdio.h>
#define COLS 4
void copy_arr(double ar[], double tr[], int n);
void copy_arr2d(double ar[][COLS], double tr[][COLS], int n);
void show_arr2d(double ar[][COLS], int n);
int main(void){
    double junk[2][COLS] = {
        {1.1, 2.2, 3.3, 4.4},
        {-1.1, -2.2, -3.3, -4.4}
    };
    double target[2][COLS];
    copy_arr2d(junk, target, 2);
    show_arr2d(junk, 2);
    show_arr2d(target, 2);
    return 0;
}
//单行复制
void copy_arr(double ar[], double tr[], int n){
    for(int i = 0;i<n;i++){
        tr[i] = ar[i];
    }
}
void copy_arr2d(double ar[][COLS], double tr[][COLS], int n){
    for(int i=0;i<n;i++){
        copy_arr(ar[i], tr[i], COLS);
    }
}
//打印数组
void show_arr2d(double ar[][COLS], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<COLS;j++)
            printf("%.2f   ", ar[i][j]);
        printf("\n");
    }
}
