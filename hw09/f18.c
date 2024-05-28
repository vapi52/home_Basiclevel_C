#include <stdio.h>

#define SIZE 10

void input(int n, int a[][SIZE]);
int find_max(int n, int arr[SIZE]);
int find_sum_max(int n, int b[][SIZE]);

int main(void)
{
    int arr[SIZE][SIZE]={0};
    input(SIZE, arr);
    printf("%d",find_sum_max(SIZE, arr));
    return 0;
}



void input(int n, int a[][SIZE])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j <n ; j++)
            scanf("%d",&a[i][j]);
}

int find_max(int n, int a[SIZE])
{
    int max=a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int find_sum_max(int n, int d[][SIZE])
{
    int sum=0;
    for(int i = 0; i < n; ++i)
        sum+=find_max (n, d[i]);
  return sum;
}



