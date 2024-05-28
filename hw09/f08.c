#include <stdio.h>

#define SIZE 1000

int missing_number(int n, int a[]);
void input(int n, int a[]);
void swap(int n, int a[]);

int main(void)
{
    int arr[SIZE]= {0};
    input(SIZE, arr);
    printf("%d",missing_number(SIZE, arr));
    return 0;
}

int missing_number(int n, int a[])
{
    swap(SIZE, a);
    for(int i = 0; i < n && a[i]; i++)
    {
        if(a[i]+1 != a[i+1])
            return a[i]+1;
    }
    return 0;
}

void swap(int n, int a[])
{
    int temp;
    for(int i = 0; i < n && a[i]; i++)
        for (int j = i; j < n && a[j]; j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}

void input(int n, int a[])
{
    int i=0;
    do
    {
        scanf("%d",&a[i++]);
    }
    while(a[i-1]);
}


