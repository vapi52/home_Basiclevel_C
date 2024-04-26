#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    for (int i = 10; i <= a; i++)
    {
        int sum = 0;
        int d = 1;
        int b = i;
        while (b / 10 != 0 || b % 10 != 0)
        {
            sum += b % 10;
            d = d * (b % 10);
            b = b / 10;
        }
        if (sum == d)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
