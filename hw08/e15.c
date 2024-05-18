#include <stdio.h>

#define SIZE 10

int input_arr(int n, int a[]);
void print_arr(int size, int a[]);
int searchNegative(int in[], int out[]);
int searchPositive(int in[], int out[]);


int main(void)
{
    int arr[SIZE] = {0};
    int Positive[SIZE] = {0};
    int Negative[SIZE] = {0};
    int num_negative = 0;
    int num_positive = 0;
    input_arr(SIZE,arr);
    num_positive = searchPositive(arr,Positive);
    num_negative = searchNegative(arr,Negative);
    print_arr(num_positive,Positive);
    print_arr(num_negative,Negative);
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
    return;
}


int searchPositive(int in[], int out[])
{
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(in[i] > 0)
            out[count++] = in[i];
    }
    return count;
}

int searchNegative(int in[], int out[])
{
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(in[i] < 0)
            out[count++] = in[i];
    }
    return count;
}
