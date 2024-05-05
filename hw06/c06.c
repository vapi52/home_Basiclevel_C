#include <stdio.h>

#define SQUARES 64

long long int CountCurrent(int s);

int main(void)
{

    int squares;
    scanf("%d", &squares);
    if (squares <= SQUARES)
        printf("%llu\n", CountCurrent(squares));
    return 0;
}

long long int CountCurrent(int s)
{
    long long int current = 1;
    for (int i = 2; i <= s; i++)
        current = 2 * current;
    return current;
}

