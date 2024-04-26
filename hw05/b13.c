#include <stdio.h>

int main(void)
{

    int a, dgt, even = 0, odd = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        dgt = a % 10;
        if (dgt % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        a /= 10;
    }
    printf("%d %d", even, odd);
    return 0;
}
