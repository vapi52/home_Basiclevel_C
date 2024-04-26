#include <stdio.h>

int main(void)
{

    int a, dgt;
    int status = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        dgt = a % 10;
        if (dgt % 2 == 1) status = 1;
        a /= 10;
    }
    status == 1 ? printf("NO") : printf("YES");
    return 0;
}

