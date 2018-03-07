#include <stdio.h>

int main(void){
    double nums1[9], nums2[9];
    printf("Please enter 8 double numbers:\n");
    for (int i=0;i<8;i++)
        scanf("%lf", &nums1[i]);
    for(int i = 0; i<8;i++){
        if(i>=1){
            nums2[i] = nums2[i-1] + nums1[i];
        }
        else{
            nums2[i] = nums1[i];
        }
        printf("%-10.1f", nums1[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%-10.1f", nums2[i]);
    }
    return 0;
}