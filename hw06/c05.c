#include <stdio.h>

int SumNumbers (int);

int main()
{
    int number;
    scanf("%d",&number);
    printf("%d\n",SumNumbers(number));
    return 0;
}

int SumNumbers (int n)
{
    int sum = 0;
    for(int i=1; i <= n; ++i)
        sum += i;
    return sum;
}
