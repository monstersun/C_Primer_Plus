#include <stdio.h>
#define SIZE 10
int sum(int a[], int n);

int main(void){
    int marbles[SIZE] = {1,2,3,4,5,6,7};
    int answer;
    answer = sum(marbles, SIZE);
    printf("the total of number is %d\n", answer);
    printf("the size of marbles is %zd\n", sizeof marbles);
    return 0;
}

int sum(int a[], int n){
    int total = 0;
    for (int i = 0;i < n;i++)
        total += *(a + i);
    printf("the size of a is %zd.\n", sizeof a);
    
    return total;

}