#include <stdio.h>

int main(void)
{
    int a, dgt;
    int max =0;
    int min = 9;
    scanf("%d", &a);

    while (a > 0)
    {
        dgt = a % 10;
        
        if (dgt < min)
        {
            min = dgt;
        }

        if (dgt > max)
        {
            max = dgt;
        }
        a /= 10;
    }

    printf("%d %d", min, max);
    return 0;
}
