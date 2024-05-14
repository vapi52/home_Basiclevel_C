#include <stdio.h>


void reverseNumbers(int);


int main(void)
{
    int num;
    scanf("%d", &num);
    reverseNumbers(num);
    return 0;
}


void reverseNumbers(int n)
{
    if(n < 10)
    {
        printf("%d ", n);
    }
    else
    {
        printf("%d ", n % 10);
        reverseNumbers(n / 10);
    }
}
