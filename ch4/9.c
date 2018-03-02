#include <stdio.h>
#define BLURB "Authentic imitation! "
int main(void){
    char name[40] = "Franklin";
    float cash = 30000.00;
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);
    printf("The %s family just may be %.2f richer", 
    name, cash);
    return 0;
}