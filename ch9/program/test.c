#include <stdio.h>

int main(void){
    char ch;
    while((ch = getchar())!='#'){
        switch(ch - '1'){
            case 0:
            case 1:putchar(ch + 3);
            case 2:putchar(ch + 3);break;
            default:break;
        }
    }
    return 0;
}