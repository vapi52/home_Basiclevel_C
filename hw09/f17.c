#include <stdio.h>

#define SIZE 5

int trace_matrix(int n, int mtr[][SIZE]);
void input(int n, int a[][SIZE]);

int main(void)
{
    int arr[SIZE][SIZE]= {0};
    input (SIZE,arr);
    printf("%d", trace_matrix(SIZE,arr));
    return 0;
}

int trace_matrix(int n,int mtr[][SIZE])
{
    int sum=0;
    for(int i=0; i<n; ++i)
        sum+=mtr[i][i];
    return sum;
}

void input (int n, int a[][SIZE])
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
}
