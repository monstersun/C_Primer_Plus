#include <stdio.h>
#include <string.h>

int main(void){
    char c_enter[40], c_out[40];
    int status, len;
    printf("Please enter the string:\n");
    status = scanf("%s", c_enter);
    if(status == 1){
        len = strlen(c_enter);
        for(int i=0;i<len;i++){
            c_out[i] = c_enter[len-i-1];
        }
        printf("The answer is:%s\n", c_out);
    }
    return 0;
}