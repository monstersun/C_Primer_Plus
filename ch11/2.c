#include <stdio.h>

int main(void){
    char name[4]="abb";
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    printf("%s\n", name);
    getchar();
    return 0;
}