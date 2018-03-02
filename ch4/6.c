#include <stdio.h>
#define PAGES 931
//整形变量格式化输出
int main(void){
    printf("*%d*\n", PAGES);
    printf("%2d\n", PAGES);
    printf("%10d\n", PAGES);
    printf("%-10d\n", PAGES);
    return 0;
}