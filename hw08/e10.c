#include <stdio.h>

#define SIZE 12
#define NUM_SHIFTED_ARR_ELEMENTS 4

int input_arr(int n, int a[]);
void print_arr(int size, int a[]);
void shift_array_right(int size, int a[]);

int main(void)
{
    int arr[SIZE] = {0};
    input_arr(SIZE,arr);
    shift_array_right(SIZE,arr);
    print_arr(SIZE, arr);
    return 0;
}

int input_arr(int n, int a[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return i;
}

void print_arr(int size, int a[])
{
    for (size_t i = 0; i < size; i++ )
         printf("%d ",a[i]);
    printf("\n");
    return;
}

void shift_array_right(int size, int a[])
{
    for (int i = 0; i < NUM_SHIFTED_ARR_ELEMENTS; i++)
    {
        int tmp = a[size - 1];
        for (int i = size - 1; i > 0; i-- )
            a[i] = a[i-1];
        a[0] = tmp;
    }
}





