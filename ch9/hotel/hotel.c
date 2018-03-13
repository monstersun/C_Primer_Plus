#include <stdio.h>
#include "hotel.h"

int menu(void){
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel.\n");
    printf("1)Fairfield Arms       2)Hotel Olympic\n");
    printf("3)ChertWorthy plazza   4)The Stockton\n");
    printf("5)quit\n");
    while((status = scanf("%d", &code)) != 1 || code > 5 || code < 1){
        if(status != 1)
            scanf("%*s");
        printf("Please enter an integer between 1 and 5\n");
    }
    return code;
}

int get_nights(){
    int nights, status;
    printf("How many nights you want to live in?\n");
    while((status = scanf("%d", &nights)) != 1 || nights < 0){
        printf("Please enter the valid integer.\n");
        if(status != 1)
            scanf("%*s");
    }
    return nights;
}

void show_price(float hotel_rate, int nights){
    printf("The total cost will be $ %.2f\n", hotel_rate * nights);
    return ;
}