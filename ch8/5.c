#include <stdio.h>
#include <stdbool.h>
#define LOW -1000
#define HIGH 1000
int get_int();//得到一个整数
bool bad_limits(int begin, int end, int low, int high);//判断上下界是否正确  

int main(void){
    int start, stop;
    printf("enter the lowwer limmit:\n");
    start = get_int();
    printf("enter the upper limmit:\n");
    stop = get_int();
    if(!bad_limits(start, stop, LOW, HIGH)){
        for(int i = start;i<=stop;i++){
            printf("%-5d%-5d\n", i, i*i);
        }
    }
    return 0;
}

int get_int(){
    int n;
    char ch;
    while(scanf("%d", &n) != 1){
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf("is not an integer.\nPlease enter an");
        printf("integer value, such as 25, -178, or 3.\n");
    }
    return n;
}

bool bad_limits(int begin, int end, int low, int high){
    bool not_good = false;
    if(begin > end){
        printf("%d is not smaller than %d\n", begin, end);
        not_good = true;
        return not_good;
    }
    else if(begin < low || end > high){
        printf("out of range!\n");
        not_good = true;
        return not_good;
    }
    return not_good;
}