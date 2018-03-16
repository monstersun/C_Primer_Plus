#include <stdio.h>
void copy_arr(int ar[], int tr[], int n);
void show_arr(int ar[], int n);
int main(void){
    int ar[7] = {1,2,3,4,5,6,7};
    int tr[3];
    copy_arr(ar+2, tr, 3);
    show_arr(tr, 3);
    return 0;
}

void copy_arr(int ar[], int tr[], int n){
    for(int i = 0;i<n;i++){
        tr[i] = ar[i];
    }
}
void show_arr(int ar[], int n){
    for(int i = 0;i<n;i++){
        printf("%d  ", ar[i]);
    }
    printf("\n");
}