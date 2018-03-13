#include <stdio.h>
void mikado(int bah);
int main(void){
    int pooh = 2, bah = 5;
    printf("in main(), pooh = %d, &pooh = %p\n", pooh, &pooh);
    printf("in main(), bah = %d, &bah = %p\n", bah, &bah);
    mikado(bah);
    return 0;
}
void mikado(int bah){
    int pooh = 10;
    printf("in mikado(), pooh = %d, &pooh = %p\n", pooh, &pooh);
    printf("in mikado(), bah = %d, &bah = %p\n", bah, &bah);
    return;
}