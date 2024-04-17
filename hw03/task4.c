#include <stdio.h>

int main(void)
{
    int number1, number2, number3;
    scanf("%d%d%d", &number1, &number2, &number3);
    float average_numbers = (number1 + number2 + number3) / 3.;
    printf("%.2f\n", average_numbers);
    
    return 0;
}

