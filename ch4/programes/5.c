#include <stdio.h>
#include <string.h>

int main(void){
    char firstname[20], secondname[20];
    printf("plese enter your firstname and secondname:\n");
    scanf("%s%s", firstname, secondname);
    printf("%10s %10s\n",firstname, secondname);
    printf("%10d %10d\n", strlen(firstname), strlen(secondname));
    printf("%-10s %-10s\n", firstname, secondname);
    printf("%-10d %-10d\n", strlen(firstname), strlen(secondname));
}