#include <stdio.h>
#define STOP '|'

int main(void){
    char ch;
    int increment_words = 0, increment_chars = 0, increment_lines = 0;
    _Bool inword = 0;
    printf("words counter begin!\n");
    printf("-----------------------\n\n\n");
    while((ch = getchar()) != STOP){
        if(ch != ' ' && ch != '\n' && ch != '\t'){
            increment_chars++;
            if(inword == 0){
                inword = 1;
                increment_words++;
            }
        }
        else if(ch == '\n'){
            increment_lines++;
            inword = 0;
        }
        else if(ch == ' '){
            inword = 0;
        }
        putchar(ch);
    }
    printf("chars  words  lines\n");
    printf("%3d%5d%5d", increment_chars, increment_words, increment_lines);
    return 0;
}