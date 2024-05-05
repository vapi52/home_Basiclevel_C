#include <stdio.h>

int power(int n, int р) ;

int main(void)
{
    int  x, exp, xpow;
    scanf("%d%d", &x, &exp); 
    xpow = power(x, exp);
    printf("%d\n", xpow);    
    return 0;
}

int power (int n, int р) 
{
    int pow = 1;
    for (int i =1; i <= р; i++)
        pow *= n;
    return pow;
}


