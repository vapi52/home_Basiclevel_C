#include <stdio.h>

int main(void)
{
    const int DGT = 9;
    int a,num;
    int status = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        num = a % 10;
        if (num == DGT)
        {
            status++;
        }
        a /= 10;
    }
    status == 1 ? printf("YES") : printf("NO");
    return 0;
}
