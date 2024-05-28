#include <stdio.h>

#define SIZE 1000

int find_max_array(int size, int a[])
{
  int max = a[0];
  for (int i = 0; i < size; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  return max;
}


int main(void)
{
  int arr[SIZE];
  int size = 0;

  char ch;
  int number = 0;
  int nf = 0;
  while (1)
  {
    ch = getchar();
    if (ch == '-')
    {
      nf = 1;
    }
    else if (ch != ' ' && ch != '\n')
    {
      number = number * 10;
      number = nf ? number - ch + '0' : number + ch - '0';
    }
    else
    {
      arr[size++] = number;
      number = 0;
      nf = 0;
      if (ch == '\n')
      {
        break;
      }
    }
  }
  printf("%d\n", find_max_array(size, arr));
  return 0;
}


