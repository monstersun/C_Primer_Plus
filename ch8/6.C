#include <stdio.h>

void count();
int main(void){
    char ch;

    printf("Enter the letter of your choice.\n");
    printf("a.advice        b.bell          \n");
    printf("c.count         q.quit          \n");

    while((ch = getchar()) != 'q'){
        if(ch != 'a' && ch != 'b' && ch != 'c'){
            printf("Please enter valid letter.\n");
        }
        while(getchar() != '\n')    
            continue;
        switch(ch){
            case 'a':
                printf("Buy low, sell high.\n");
                break;
            case 'b':
                printf("\\a\n");
                break;
            case 'c':
                count();
                break;
            default:
                printf("Program error!\n");
                break;
        }
        printf("Enter the letter of your choice.\n");
        printf("a.advice        b.bell          \n");
        printf("c.count         q.quit          \n");
      
    }
    return 0;
}

void count(){
    int x;
    printf("Want to count how far? enter an integer.\n");
    if(scanf("%d", &x) == 1){
        for(int i = 1;i<=x;i++){
            printf("%d\n", i);
        }
    }
}