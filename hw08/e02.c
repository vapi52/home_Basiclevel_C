#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int Input(int n, int arr[]);
int Min(int len, int arr[]);

int main()
{

    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf("%d\n",Min(SIZE, arr));
    return 0;
}

int Input(int n, int arr[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

int Min(int len, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
