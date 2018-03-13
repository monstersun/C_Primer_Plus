#include <stdio.h>
#include "hotel.h"//常量

int main(void){
    int code, nights;
    float hotel_rate;
    while((code = menu()) != QUIT){
        switch(code){
            case 1:
                hotel_rate = HOTEL_RATE1;
                break;
            case 2:
                hotel_rate = HOTEL_RATE2;
                break;
            case 3:
                hotel_rate = HOTEL_RATE3;
                break;
            case 4:
                hotel_rate = HOTEL_RATE4;
                break;
            default:
                printf("Opps!\n");
                break;
        }
        nights = get_nights();
        show_price(hotel_rate, nights);
        printf("Thank you!\n");
    }
    printf("Bye!\n");
    return 0;
}