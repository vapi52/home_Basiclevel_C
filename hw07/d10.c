#include <stdio.h>

int is_prime(int, int);



int main(void)
{
    int number;
    scanf("%d", &number);
    if (is_prime(number, 2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

int is_prime(int n, int divider)
{
    if (n == divider)
    {
        return 1;
    }
    if (n == 1 || n % divider == 0)
    {
        return 0;
    }
    return is_prime(n, ++divider);
}
