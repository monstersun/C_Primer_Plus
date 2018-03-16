#include <stdio.h>
#define SIZE 10
//定义函数如果不想函数修改指针指向的内容，用const
void show_array(const double a[], int size);
void multi_array(double a[], int size, double x);
int main(void){
    double dip_array[SIZE] = {2.1, 30.1, 22.3, 21.3, 19.0};
    show_array(dip_array, SIZE);
    multi_array(dip_array, SIZE, 2.5);
    printf("After multiply the array is:\n");
    show_array(dip_array, SIZE);
    return 0;
}

void show_array(const double a[], int size){
    for(int i=0;i<size;i++){
        printf("%8.3f", *(a+i));
    }
    printf("\n");
    return;
}

void multi_array(double a[], int size, double x){
    for(int i=0;i<size;i++){
        a[i] *= x;
    }
    return;
}