#include <stdio.h>
#include <ctype.h>

float power(int x, int y);
int main(void){
    int x, y;
    printf("enter :\n");
    scanf("%d%d", &x, &y);
    printf("answer:%.2f\n", power(x, y));
    return 0;
}
float power(int x, int y){
    float ans = 1;
    if(x == 0){
        if(y == 0)
            return 1;
        return 0;
    }
    else{
        if(y == 0)
            return 1;
        else{
            for(int i = 0;i < y;i++)
                ans = x*power(x, y-1);
            return ans;
        }
    }
  
}