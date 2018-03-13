#include <stdio.h>
 
int fact(int x);
int main(void){
   
    int i_enter;
    printf("enter the number you want to calculate.\n");
    while(scanf("%d", &i_enter) == 1){
        printf("the answer is %d\n", fact(i_enter));
        printf("Try again?\n");
    }
    
    return 0;
}

int fact(int x){
    long fac;
    if(x > 0)
        fac = x * fact(x-1);
    else 
        fac = 1;
    return fac;
}