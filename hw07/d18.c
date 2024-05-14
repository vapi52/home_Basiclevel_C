#include <stdio.h>


void print_digits(int);


int main(void)
{

    int number;
    scanf("%d", &number);
    print_digits(number);
    return 0;
}


void print_digits(int num)
{
    if(num < 10)
    {
        printf("%d ", num);
    }
    else
    {
        print_digits(num / 10);
        printf("%d ", num % 10);
    }
}
