#include <stdio.h>
#define LIM 5
int main(void){
    const char *mytal[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    printf("%p\n", mytal);
    printf("%p\n", *mytal);
    printf("%c\n", **mytal);
    printf("%c\n", mytal[0][0]);
    printf("%p\n", mytal[0]);
    printf("%p\n", &mytal[0]);
    return 0;
}