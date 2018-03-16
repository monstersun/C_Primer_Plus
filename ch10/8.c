#include <stdio.h>

int main(void){
    int test[4][2] = {{1,2}, {2,3}, {3,4}, {4,5}};
    printf("test = %p\n", test);
    printf("*test=%p\n", *test);
    printf("test[0] = %p\n", test[0]);
    printf("test+1=%p\n", test + 1);
    printf("test[0]+1=%p\n", test[0]+1);
  
    printf("*(test+1)=%p\n", *((test + 1)+1));
    printf("*(test[0]+1)=%d\n", *(test[0]+1));

    return 0;
}