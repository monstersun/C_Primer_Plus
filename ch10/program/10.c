#include <stdio.h>
#define ROWS 3
#define COLS 5
void twice(int rs, int cs, int ar[rs][cs]);
void show_arr(int rs, int cs, int ar[rs][cs]);
int main(void){
    int source[ROWS][COLS] = {
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7}
    };
    show_arr(ROWS, COLS, source);
    twice(ROWS, COLS, source);
    show_arr(ROWS, COLS, source);
    return 0;
}
void twice(int rs, int cs, int ar[rs][cs]){
    for(int i = 0;i<rs;i++){
        for(int j=0;j<cs;j++)
            ar[i][j] *= 2;
    }
}
void show_arr(int rs, int cs, int ar[rs][cs]){
    for(int i=0;i<rs;i++){
        for(int j =0;j<cs;j++){
            printf("%-2d  ",ar[i][j]);
        
        }
        printf("\n");
    }
}