#include <stdio.h>
#define SINGLE_TAX 17850.0F
#define HEAD_TAX 23900.0F
#define MARRIED_TAX 29750.0F
#define DEVORCE_TAX 14875.0F
#define RATE1 0.15F
#define RATE2 0.28F

int main(void){
    int i_choice;
    float money, tax;
    printf("*************************\n");
    printf("choose your kinds of tax:\n");
    printf("1)single    ");
    printf("2)head      \n");
    printf("3)married   ");
    printf("4)divorce   \n");
    printf("*************************\n");
    while(scanf("%d", &i_choice) == 1){
        if(i_choice > 4 || i_choice < 1){
            printf("please enter the valid number!\n")
            break;
        }
        printf("enter you money:\n");
        scanf("%f", &money);
        switch(i_choice){
            case 1:
                if(money <= SINGLE_TAX)
                    tax = money * RATE1;
                else
                    tax = SINGLE_TAX * RATE1 + (money - SINGLE_TAX) * RATE2;
                break;
            case 2:
                if(money <= HEAD_TAX)
                    tax = money * RATE1;
                else
                    tax = HEAD_TAX * RATE1 + (money - HEAD_TAX) * RATE2;
                break;
            case 3:
                if(money <= MARRIED_TAX)
                    tax = money * RATE1;
                else
                    tax = MARRIED_TAX * RATE1 + (money - MARRIED_TAX) * RATE2;
                break; 
            case 4:
                if(money <= DEVORCE_TAX)
                    tax = money * RATE1;
                else
                    tax = DEVORCE_TAX * RATE1 + (money - DEVORCE_TAX) * RATE2;
                break;       
        }
        printf("your tax is: %.2f\n", tax);
        printf("*************************\n");
        printf("choose your kinds of tax:\n");
        printf("1)single    ");
        printf("2)head      \n");
        printf("3)married   ");
        printf("4)divorce   \n");
        printf("*************************\n");
    }

    return 0;
}