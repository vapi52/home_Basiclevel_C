#include <stdio.h>

#define SIZE 10

int input_arr(int n, int a[]);
void NumOnlyOnce(int size, int a[]);

int main(void)
{
    int arr[SIZE] = {0};
    input_arr(SIZE,arr);
    NumOnlyOnce(SIZE,arr);
    return 0;
}

int input_arr(int n, int a[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return i;
}

void NumOnlyOnce(int size, int arr[])
{
    for(int i = 0; i < size; i++)
    {
        _Bool flag = 1;
        for(int j = 0; j < size; j++)
            if((i != j) && arr[i] == arr[j])
                flag = 0;

        if(flag)
            printf("%d ",arr[i]);
    }
}

