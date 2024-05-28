#include <stdio.h>
#define SIZE 30

void input(int n,int a[]);
void out_too_num(int size, int a[]);

int main(void)
{
    int arr[SIZE];
    input(SIZE, arr);
    out_too_num(SIZE,arr);
    return 0;
}
void input(int n,int a[])
{
    for(int i = 0; i < n ; i++)
        scanf("%d",&a[i]);
}

void out_too_num(int size, int a[])
{
    int minN1=a[0], minN2=a[1], cntN1=0, cntN2=1;
    for(int i=0; i < size; i++)
        for(int j=i+1; j<size; j++)
            if(a[i]+a[j]< minN1+minN2)
            {
                minN1=a[i];
                cntN1=i;
                minN2=a[j];
                cntN2=j;
            }
    if(cntN1 < cntN2)
        printf("%d %d\n",  cntN1, cntN2);
    else
        printf("%d %d\n", cntN2, cntN1);
}
