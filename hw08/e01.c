#include <stdio.h>

#define SIZE 5

void input_printAverage(int n, int arr[]);

int main()
{
    int arr[SIZE] = {0};
    input_printAverage(SIZE, arr);
    return 0;
}

void input_printAverage(int n, int arr[])
{
int i;
float average, sum = 0.0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum/n;
    printf("%.3f\n", average);
}
