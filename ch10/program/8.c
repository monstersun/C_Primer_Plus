#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_varr2d(int rs, int cs, double ar[rs][cs], double tr[rs][cs]);
void show_arr2d(double ar[][COLS], int n);
int main(void){
    int rs=3, cs=5;
    double source[ROWS][COLS] = {
        {1.1,2.2,3.3,4.4,5.5},
        {6.6,7.7,8.8,9.9,10},
        {12.1,13.1,11.1,14.1,15.1}
    };
    double target[rs][cs];
    copy_varr2d(ROWS, COLS, source, target);
    show_arr2d(target, ROWS);
    return 0;
}
void show_arr2d(double ar[][COLS], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<COLS;j++)
            printf("%.2f   ", ar[i][j]);
        printf("\n");
    }
}
void copy_varr2d(int rs, int cs, double ar[rs][cs], double tr[rs][cs]){
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++)
            tr[i][j] = ar[i][j];
    }
    }