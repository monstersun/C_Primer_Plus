#include <stdio.h>
#define inch 2.54
int main(void){
    char name[40];
    float height;
    printf("Please enter your name and height:(cm)\n");
    scanf("%s%f", name, &height);
    printf("%s, you are %.2f feet tall", name, height/100);

}