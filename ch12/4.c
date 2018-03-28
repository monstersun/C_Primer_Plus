#include <stdio.h>
int units = 0;
void critic(void);
int main(void){
    extern int units;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56){
        critic();
    }
    printf("you must have look at it!");
    return 0;
}
void critic(void){
    printf("No luck.Try again!\n");
    scanf("%d", &units);
}