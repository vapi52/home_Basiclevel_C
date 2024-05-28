#include <stdio.h>

#define SIZE 5


float find_average_matrix(int n, int mtx[][SIZE]);
int find_above(int n, int mtx[][SIZE]);
void input(int n, int a[][SIZE]);

int main(void)
{
    int arr[SIZE][SIZE]= {0};
    input(SIZE, arr);
    printf("%d",find_above(SIZE,arr));
    return 0;
}


void input(int n, int a[][SIZE])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
}

float find_average_matrix(int n, int mtx[][SIZE])
{
    int sum=0;
    for(int i = 0;  i< n; ++i)
        sum+=mtx[i][i];
    return sum/5.;
}

int find_above(int n, int mtx[][SIZE])
{
    float avg = find_average_matrix(n, mtx);
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(mtx[i][j] > avg)
                cnt++;
    return cnt;
}
