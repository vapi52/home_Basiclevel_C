#include <stdio.h>

#define SIZE 5

int Input(int n, int arr[]);
float Average(int n, int arr[]);

int main()
{
    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf("%.3f\n", Average(SIZE, arr));
    return 0;
}

int Input(int n, int arr[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

float Average(int n, int arr[])
{
int i;
float average, sum = 0.0;
    for(i = 0; i < n; i++)
        sum += arr[i];
    average = sum/n;
    return average;
}
