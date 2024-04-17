#include <stdio.h>

int main(void)
{
    int three_digit_number;
    scanf("%d", &three_digit_number);
    printf("%d", (three_digit_number / 100) * ((three_digit_number % 100) / 10) * (three_digit_number % 10));

    return 0;
}

