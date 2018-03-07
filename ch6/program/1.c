#include <stdio.h>

int main(void){
    char letters[27] = "abcdefghijklmnopqrstuvwxyz";


    for(int i=0;i<26;i++)
        printf("%c ", letters[i]);
    return 0;
}