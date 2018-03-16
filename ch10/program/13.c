#include <stdio.h>
#define ROWS 3
#define COLS 5
void enter_numbers(int ar[], int n);
double avg_set(int ar[], int n);
double avg_all(int rs, int cs, int ar[rs][cs]);
int max(int rs, int cs, int ar[rs][cs]);
int main(void){
    int numbers[ROWS][COLS];
    for(int i = 0;i<ROWS;i++){
        enter_numbers(numbers[i], COLS);
    }
    for(int i=0;i<ROWS;i++){
        printf("ROW: %d    AVG:%.2f\n", i+1, avg_set(numbers[i], COLS));
    }
    printf("the average of all numbers is %.2f\n", avg_all(ROWS, COLS, numbers));
    printf("the max of all numbers is %d\n", max(ROWS, COLS, numbers));

    return 0;
}



void enter_numbers(int ar[], int n){
    for(int i=0;i<n;i++){
        printf("Please enter NO.%d:\n", i+1);
        scanf("%d", ar+i);
    }
}
double avg_set(int ar[], int n){
    int sum=0;
    double avg;
    for(int i=0;i<n;i++){
        sum += ar[i];
    }
    avg = (double)sum/n;
    return avg;
}
double avg_all(int rs, int cs, int ar[rs][cs]){
    int sum = 0;
    double avg;
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++)
            sum += ar[i][j];
    }
    avg = (double)sum/rs/cs;
    return avg;
}
int max(int rs, int cs, int ar[rs][cs]){
    int temp = ar[0][0];
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            if(temp < ar[i][j])
                temp = ar[i][j];
        }
    }
    return temp;
}

