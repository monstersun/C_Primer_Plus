#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime_is_good(int x);

int main(void){
    int i_enter, i_half;
    printf("enter the number\n");
    while(scanf("%d", &i_enter) == 1){
        printf("the prime under %d is:\n", i_enter);
        for (int i = 2;i<=i_enter;i++){
            if(prime_is_good(i))
                printf("%d  ", i);
        }
        printf("\nthe next number is:\n");
    }
    return 0;
}
bool prime_is_good(int x){
    float x1 = pow(x, 0.5);
    for (int i = 2;i<=x1;i++){
        if (x%i == 0)
            return false;
    }
    return true;
}