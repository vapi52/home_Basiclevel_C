#include <stdio.h>

char is_digit(char);

int main()
{
  int number_digits = 0;
  int ch;
  while ((ch = getchar()) != '.')
  {
    if (is_digit(ch))
    {
      number_digits++;
    }
  }
  printf("%d\n", number_digits);
  return 0;
}

char is_digit(char c)
{
  return c >= '0' && c <= '9';
}
