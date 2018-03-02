#include <stdio.h>

int main(void){
    char first_name[20], second_name[20];

    printf("请输入您的姓和名：\n");
    scanf("%s%s", first_name, second_name);
    printf("hello, %s,%s", first_name, second_name);
}