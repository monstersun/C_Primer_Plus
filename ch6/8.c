#include <stdio.h>
//do循环使用
int main(void){
    const int secret_code = 13;
    int guess_code;
    do{
        printf("please guess the number:\n");
        scanf("%d", &guess_code);
    }while(guess_code != secret_code);
    printf("you are success!");
    return 0;
}