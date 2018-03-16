#include <stdio.h>
#define SIZE 10
int sum(int *start, int *end);

int main(void){
    int marbles[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("the total of numbers is %d", sum(marbles, marbles+SIZE));
    return 0;
}

int sum(int *start, int *end){
    int total = 0;
    while(start < end){
        total += *start;
        start++;
    }
    return total;
}