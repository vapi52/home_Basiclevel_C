#include <stdio.h>

void odd_find(void);

int main(void)
{
    odd_find();
    return 0;
}

void odd_find(void)
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        return;
    }
    if (n % 2 != 0)
    {
        printf("%d ", n);
    }
    odd_find();
}
