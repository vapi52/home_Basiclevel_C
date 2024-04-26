#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a == 0)
    {
        printf("0");
    }
    else
    {
        while (a / 10 != 0 || a % 10 != 0)
        {
            printf("%d", a % 10);
            a = a / 10;
        }
    }
    return 0;
}

