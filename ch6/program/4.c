#include <stdio.h>
#include <string.h>
#define letters "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

int IndexOf(char c_enter);//获得字符的索引号

int main(void){
    int index;
    char c_letter;
    printf("Please enter the letter:\n");
    scanf("%c", &c_letter);
    index = IndexOf(c_letter);
    printf("%d\n", index);
    for(int i=0;i<=index;i++){
        printf("%*c", index+1-i,' ');
        for(int j=0;j<=i;j++){
            printf("%c", letters[j]);
        }
        if(i>0){
            for(int h=i-1;h>=0;h--){
                printf("%c", letters[h]);
            }
        }
        printf("\n");
    }
}

int IndexOf(char c_enter){
    for(int i =0;i<strlen(letters);i++){
        if(c_enter == letters[i]){
            return i;
        }
    }
}