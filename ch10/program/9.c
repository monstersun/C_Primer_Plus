#include <stdio.h>
#define ROWS 4

void cal(int rs, int ar1[rs], int ar2[rs], int tr[rs]);
void show_arr(int rs, int ar[]);
int main(void){
    int ar1[ROWS] = {1,2,3,4};
    int ar2[ROWS] = {2,3,4,5};
    int tr[ROWS];
    cal(ROWS, ar1, ar2, tr);
    show_arr(ROWS, ar1);
    show_arr(ROWS, ar2);
    show_arr(ROWS, tr);
    return 0;
}
void show_arr(int rs, int ar[]){
    for(int i=0;i<rs;i++){
        printf("ROW: %d  VALUE: %d\n", i+1, ar[i]);
    }
}
void cal(int rs, int ar1[], int ar2[], int tr[]){
    for(int i=0;i<rs;i++){
        tr[i] = ar1[i] + ar2[i];
    }
}