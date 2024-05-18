#include <stdio.h>

#define SIZE 10

int Input(int n, int arr[]);
void SumPositiveNumbers(int lenght, int arr[]);


int main()
{
    int arr[SIZE] = {0};
    Input(SIZE,arr);
    SumPositiveNumbers(SIZE,arr);
    return 0;
}

int Input(int n, int arr[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}


void SumPositiveNumbers(int lenght, int arr[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    printf("%d\n", sum);
}

