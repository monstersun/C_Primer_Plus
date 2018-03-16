#include <stdio.h>

int main(void){
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, *ptr2, * ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("prt1=%p, *ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
    printf("prt2=%p, *ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
    ptr3 = ptr1 + 4;
    printf("ptr3=%p, *ptr3=%d, &ptr3=%p\n", ptr3, *ptr3, &ptr3);
    ptr1++;
    printf("prt1=%p, *ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
    ptr2--;
    printf("prt2=%p, *ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
    ptr1--;
    ptr2++;
    printf("prt1=%p, *ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
    printf("prt2=%p, *ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
    printf("ptr2-ptr1=%d\n", ptr2-ptr1);
    printf("ptr3-2=%p\n", ptr3-2);
    return 0;
}