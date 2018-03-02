#include <stdio.h>

int main(){
    int bph2o = 212;
    int rv;
    rv = printf("%d f is water's boiling point.\n", bph2o);
    printf("the printf() function print %d charactors", rv);
    return 0;
}