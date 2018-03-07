#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int increment_space = 0, increment_n = 0, increment_others;
    printf("enter:\n");
    while((ch = getchar()) != '#'){
        switch(ch){
            case ' ':
                increment_space++;
                break;
            case '\n':
                increment_n++;
                break;
            default:
                increment_others++;
                break;
        }     
    }
    printf("space:%d  \\n:%d others:%d", increment_space, increment_n, increment_others);
    return 0;
}