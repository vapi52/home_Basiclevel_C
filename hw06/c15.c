#include <stdio.h>

int grow_up(int);

int main(void)
{
    int number;
    scanf("%d", &number);
    grow_up(number);
    if (grow_up(number))
        printf("NO");
    else
        printf("YES");
    return 0;
}

int grow_up(int n)
{
    int dgt;
    int status = 0;
    while (n != 0)
    {
        dgt = n % 10;
        n /= 10;
        if (dgt <= n % 10) status = 1;
    }
    return status;
}
