#include <stdio.h>

int main(void){
    char ch, c_test[256];
    int i = 0, n_ei = 0;
    printf("enter what you want(# to quit):");
    while((ch = getchar()) != '#'){
        c_test[i] = ch;
        if(i > 0){
            if(c_test[i-1] == 'e' && c_test[i] == 'i')
                n_ei++;
        }
        i++;
    }
    printf("the \"ei\" appears %d times", n_ei);
    return 0;
}