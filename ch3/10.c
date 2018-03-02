#include <stdio.h>

int main(void){
    float water;
    float water_m;
    float num;
    long i_num;
    water_m = 3.0e-23;
    water = 950.0;
    num = water/water_m;
    i_num = (long long) num;
    printf("950g water has %e water molucule",num);
}