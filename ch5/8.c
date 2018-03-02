#include <stdio.h>

int main(void){
    const int I_CHANGE = 60;
    int sec, min, sec_enter;
    printf("enter the seconds you want to change:\n");
    scanf("%d", &sec_enter);
    min = sec_enter / I_CHANGE;
    sec = sec_enter % I_CHANGE;
    printf("min: %d seconds: %d", min, sec);
    return 0;
}