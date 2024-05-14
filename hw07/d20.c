#include <stdio.h>

int recurs_power(int, int);


int main(void)
{
    int number, exponent;
    scanf("%d %d", &number, &exponent);
    printf("%d\n", recurs_power(number, exponent));
    return 0;
}

int recurs_power(int n, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return n * recurs_power(n, exp - 1);
}
