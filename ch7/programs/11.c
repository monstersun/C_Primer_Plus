#include <stdio.h>
#define ARTICHOKE 1.25
#define BEET 0.65
#define CARROT 0.89
#define DISCOUNT 0.95
#define TRAN_FEE_5 3.5
#define TRAN_FEE_20 10
#define TRAN_FEE_20_RATE 0.1

int main(void){
    char choice;
    float a = 0, b = 0, c = 0, sums, money, tarns_fee;
    int status1, status2;
    do{ 
            printf("***************************************\n");
            printf("choose kind of vegetables:\n");
            printf("a:artichoke  b:beet  c:carrot q:quit\n");
            printf("***************************************\n");
        do{
            choice = getchar();
            if(choice == '\n')
                continue;
            if(choice != 'a' && choice != 'b' && choice != 'c')
                break;
            printf("enter the ponds you want buy:\n ");
            switch(choice){
                case 'a':
                    scanf("%f", &a);
                    break;
                case 'b':
                    scanf("%f", &b);
                    break;
                case 'c':
                    scanf("%f", &c);
                    break;
                default:
                    break; 
            }
            printf("***************************************\n");
            printf("choose kind of vegetables:\n");
            printf("a:artichoke  b:beet  c:carrot q:quit\n");
            printf("***************************************\n");
            
        }while(choice);
        if(a>0 || b>0 || c>0){
            sums = a + b + c;
            money = a*ARTICHOKE + b * BEET + c * CARROT;
            if(sums <= 5)
                tarns_fee = TRAN_FEE_5;
            else if(sums <= 20)
                tarns_fee = TRAN_FEE_20;
            else
                tarns_fee = 8 + (sums - 20)* TRAN_FEE_20_RATE;
            if(money > 100)
                money = (money-money/100*100) + money/100*100*DISCOUNT;
            printf("artichoke: ponds: %.2f, unit price: $%.2f, total prices: $%.2f\n", a, ARTICHOKE, a*ARTICHOKE);
            printf("beet:      ponds: %.2f, unit price: $%.2f, total prices: $%.2f\n", b, BEET, b*BEET);
            printf("carrot:    ponds: %.2f, unit price: $%.2f, total prices: $%.2f\n", c, CARROT, c*CARROT);
            printf("Order: $%.2f   Discount: %.2f   Trans Fee: %.2f    Total: %.2f\n", money, 1-DISCOUNT, tarns_fee, money + tarns_fee);
        }
        

    }while(1);
    return 0;
}