#include <stdio.h>
#include <string.h>
#define density 62.4 // 人体密度
int main(void){
    float weight, volume;
    char name[40];
    int size, len;
    printf("enter your name: ");
    scanf("%s",name);
    printf("enter your weight: ");
    scanf("%f", &weight);
    volume = weight / density;
    size = sizeof(name);
    len = strlen(name);
    printf("your name has %d letters.\n", len);
    printf("and we use %d bytes to store your name.", size);
    printf("your volume is: %f", volume);
}
