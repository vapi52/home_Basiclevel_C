#include <stdio.h>

int is_happy_number(int);

int main(void)
{
  int number;
  scanf("%d", &number);
  if (is_happy_number(number))
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}

int is_happy_number(int n)
{
  int sum = 0;
  int pdt = 1;
  while (n / 10 != 0 || n % 10 != 0)
  {
    sum += n % 10;
    pdt = pdt * (n % 10);
    n = n / 10;
  }
  return sum == pdt;
}
