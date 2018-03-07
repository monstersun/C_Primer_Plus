#include <stdio.h>
#define i_max 9

int main(void){
    for(int i=1;i<=i_max;i++){
        for(int j=1; j<=i;j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
    return 0;
}