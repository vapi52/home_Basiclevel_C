#include <stdio.h>

int sum_digits(int);

int main(void)
{
  int number;
  scanf("%d", &number);
  printf("%d\n", sum_digits(number));
  return 0;
}

int sum_digits(int n)
{
  int sum = n % 10;
  if (n / 10 != 0)
  {
    sum += sum_digits(n / 10);
  }
  return sum;
}
