#include <stdio.h>

void display(char cr, int lines, int width);

int main(void){
    char ch;
    int rows, cols;
    printf("enter a charactor and two numbers:\n");
    while((ch = getchar()) != '\n'){
        if(scanf("%d%d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while(getchar() != '\n')
            continue;
        printf("enter another charactor and two integers.\n");
        printf("print a new line to quit.\n");
    }

    return 0;
}

void display(char cr, int lines, int width){
    for(int row=0;row<lines;row++){
        for(int col=0; col<width; col++)
            printf("%-2c", cr);
        printf("\n");
    }
}