#include <stdio.h>
#define change_c 60

int main(void){
    int min_enter, min, hou;
    while (1){
        printf("enter the minue your want to enter:\n");
        scanf("%d", &min_enter);
        if(min_enter >= 0){
            min = min_enter % change_c;
            hou = min_enter / change_c;
            printf("hou:%d min:%d", hou, min);  
        }
        else
            break;
    }

}