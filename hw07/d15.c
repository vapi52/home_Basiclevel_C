#include <stdio.h>

int max_find(int);

int main(void)
{
    int number;
    scanf("%d", &number);
    printf("%d\n", max_find(number));
    return 0;
}

int max_find(int max)
{
    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        return max;
    }
    if (num > max)
    {
        max = num;
    }
    return max_find(max);
}
