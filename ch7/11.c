#include <stdio.h>
//编译你就知道错在哪儿了
int main(void){
    char ch;
    ch = getchar();
    switch(ch){
        case 97:
            printf("hello");
        break;
        case 'a':
            printf("not hello");
        break;
    }
    return 0;
}

