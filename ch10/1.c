#include <stdio.h>
#define MONTHS 12
int main(void){
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    printf("%p\n", &days+1);
    for(index=0;index<MONTHS;index++){
        printf("Month %2d has %d days.\n", index+1, *(days + index));
    }
    return 0;
}