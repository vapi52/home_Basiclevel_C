#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int first_digit, second_digit,three_digit, max;
    uint16_t a;
    scanf("%" SCNu16, &a);
    first_digit = a / 100 % 10;
    second_digit = a / 10 % 10;
    three_digit = a % 10;
    max = first_digit > second_digit ? first_digit : second_digit;
    max = max > three_digit ? max : three_digit;
    printf("%d", max);
    return 0;
}

