#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int );
int sum2d(int (*ar)[], int rows);
int main(void){
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8}, 
        {3, 5, 7, 9}, 
        {12, 10, 8, 6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("the sum of junk is %d.\n", sum2d(junk, ROWS));
    return 0;
}
void sum_rows(int ar[][COLS], int rows){
    int temp;
    for (int i = 0;i<rows;i++){
        temp = 0;
        for(int j=0;j<COLS;j++){
            temp += ar[i][j];
        }
        printf("Row: %d,    Sums: %d\n", i+1, temp);
    }
}
void sum_cols(int ar[][COLS], int rows){
    int temp;
    for(int i = 0;i < COLS;i++){
        temp = 0;
        for(int j = 0;j < rows;j++){
            temp += ar[j][i];
        }
        printf("Col: %d,    Sums: %d\n", i+1, temp);
    }
}
int sum2d(int ar[][COLS], int rows){
    int temp = 0;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < COLS;j++){
            temp += ar[i][j];
        }
    }
    return temp; 
}