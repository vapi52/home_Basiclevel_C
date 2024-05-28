#include <stdio.h>

#define SIZE 12
#define BEGIN_SEGMENT 4
#define END_SEGMENT 6

void input(int n,int a[]);
int sum_between_ab(int from, int to, int size, int a[]);

int main(void)
{
  int arr[SIZE];
  input(SIZE,arr);
  printf("%d", sum_between_ab(BEGIN_SEGMENT, END_SEGMENT, SIZE, arr));
  return 0;
}


void input(int n,int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

 int sum_between_ab(int from, int to, int size, int a[])
{
  int sum = 0;
  if (from > to)
  {
    int tmp = from;
    from = to;
    to = tmp;
  }
  for (int i = 0; i < size; i++)
  {
    if (from <= a[i] && a[i] <= to)
    {
        sum += a[i];
        //printf("%d\n",sum);
    }
  }
  return sum;
}


