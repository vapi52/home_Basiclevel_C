#include <stdio.h>

unsigned long long factorial(int);

int main()
{
    int number;
    scanf("%d",&number);
    if (number < 0)
        printf("Factorial a negative number does not exist\n");
    else
        printf("%llu\n",factorial(number));
    return 0;
}

unsigned long long factorial(int n)
{
    unsigned long long fctrl = 1;
    for(int i=1; i <= n; i++)
            fctrl *= i;
    return fctrl;

}

