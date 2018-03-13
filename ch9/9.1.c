#include <stdio.h>
void interchange(int x, int y);

int main(void){
    int x = 5, y = 10;
    printf("x = %d, y = %d", x, y);
    interchange(x, y);
    printf("x = %d, y = %d", x, y); 
    return 0;
}
void interchange(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d", x, y);     
    return;
}
