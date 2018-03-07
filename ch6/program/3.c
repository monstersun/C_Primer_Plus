#include <stdio.h>
#include<string.h>


int main(void){
    char c_letters[7] = "ABCDEF";
    for(int i=0;i<strlen(c_letters);i++){
        for(int j = 5;j>4-i;j--)
            printf("%c", c_letters[j]);
        printf("\n");
    }
}