#include <stdio.h>

#define ARR_SIZE 10

void input(int n,int a[]);
int count_bigger_abs(int n, int a[]);

int main(void)
{
    int arr[ARR_SIZE];
    input(ARR_SIZE,arr);
    printf("%d\n", count_bigger_abs(ARR_SIZE, arr));
    return 0;
}


void input(int n,int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int count_bigger_abs(int n, int a[])
{
  int max = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int abs;
    if(a[i] < 0)
        abs = a[i] * -1;
    else abs =  a[i];
    if (abs > max)
    {
      cnt++;
    }
  }
  return cnt;
}

