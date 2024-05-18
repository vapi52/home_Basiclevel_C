#include <stdio.h>

#define SIZE 10

int input_arr(int n, int a[]);
void print_arr(int size, int a[]);
void swap(int*a, int*b);
void sort_half1_array(int size, int a[]);
void sort_half2_array(int size, int a[]);

int main(void)
{
    int arr[SIZE] = {0};
    input_arr(SIZE, arr);
    sort_half1_array(SIZE, arr);
    sort_half2_array(SIZE, arr);
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
    {
         printf("%d ",a[i]);
    }
    printf("\n");
    return;
}

void swap(int*a, int*b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_half1_array(int size, int a[])

{
    for(int j = 0; j < size/2; j++)
    {
        int flag = 1;
        for (int i = 0; i < size/2-1-j; i++)
        {
            if(a[i] > a[i+1])
            {
                swap(&a[i], &a[i+1]);
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}

void sort_half2_array(int size, int a[])
{
    for(int j = 0; j <size/2; j++)
    {
        int flag = 1;
        for (int i = size/2; i < size-1-j; i++)
        {
            if(a[i] < a[i+1])
            {
                swap(&a[i], &a[i+1]);
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}
