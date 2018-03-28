#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
    int * pa;
    int size;
    int value;
    
    printf("Enter the number of elements: \n");
    scanf("%d", &size);
    while(size > 0)
    {
        printf("Enter the initialization value: \n");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements(<1 to quit):\n");
        scanf("%d", &size);
    }

    return 0;
}

int * make_array(int size, int val)
{
    int * ptr;
    ptr = (int *) malloc(size * sizeof(int));
    ptr[0] = val;
    return ptr;
}

void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}