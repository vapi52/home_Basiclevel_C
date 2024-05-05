#include <stdio.h>

int middle(int a, int b);

int main(void)
{
    int number1, number2;
    scanf("%d%d", &number1, &number2);
    if (number1 >= 0 && number2 >= 0)
    {
        if ((number1 + number2) % 2 == 0)
            printf("%d\n", middle(number1, number2));
    }
    return 0;
}

int middle(int a, int b)
{
    int average = (a + b) / 2;
    return average;
}
