#include <stdio.h>
#include <inttypes.h>

#define SIZE 10

int Input(int n, int arr[]);
void BuffSumMax1Max2(int lenght, int arr[]);


int main()
{
    int arr[SIZE] = {0};
    Input(SIZE,arr);
    BuffSumMax1Max2(SIZE,arr);
    return 0;
}

int Input(int n, int arr[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}


void BuffSumMax1Max2(int lenght, int arr[])
{
    int max1 = arr[0];
    int max2 = arr[1];

    for(int i = 1; i < lenght; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    printf("%d\n", max1 + max2);
}

