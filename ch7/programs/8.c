#include <stdio.h>
#define salary_hour1 8.75F
#define salary_hour2 9.33F
#define salary_hour3 10.00F
#define salary_hour4 11.20F
#define avg_hour 40
#define over_times 1.5
#define tax_rate1 0.15
#define tax_rate2 0.2
#define tax_rate3 0.25
#define tax_rate1_level 300
#define tax_rate2_level 450
int main(void){
    int money, hour;
    float tax, salary_hour;
    printf("***************************************\n");
    printf("Please choose the salary you desire:\n");
    printf("1) $8.75/hr      ");
    printf("2) $9.33/hr      ");
    printf("3) $10.00/hr     ");
    printf("4) $11.20/hr     ");
    printf("5) quit     ");
    printf("***************************************\n");
    switch(getchar()){
        case '1':
            salary_hour = salary_hour1;
            break;
              case '2':
            salary_hour = salary_hour1;
            break;
              case '3':
            salary_hour = salary_hour1;
            break;
              case '4':
            salary_hour = salary_hour1;
            break;
        case '5':
            salary_hour = salary_hour1;
            break;
    }
    
    printf("enter the hour you work in a week.\n");
    while(scanf("%d", &hour) == 1){

        if(hour > avg_hour){
            money = avg_hour * salary_hour + over_times * (hour - avg_hour) * salary_hour;
        }
        else{
            money = hour * salary_hour;
        }
        if(money <= tax_rate1_level){
            tax = tax_rate1 * money;
        }
        else if(money <= tax_rate2_level){
            tax = tax_rate1 * tax_rate1_level + tax_rate2 * (money - tax_rate1_level);
        }
        else{
            tax = tax_rate1 * tax_rate1_level + tax_rate2 * (tax_rate2_level - tax_rate1_level) +\
                    tax_rate3 * (money - tax_rate2_level);
        }
        printf("your tax a week is: %.2f\n", tax);
        printf("enter the hour you work in a week\n");
    }
    
    return 0;
}