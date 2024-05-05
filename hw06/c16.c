#include <stdio.h>

int is_prime(int);

int main ()
{
    int number;
    scanf("%d",&number);

    if (is_prime(number))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

int is_prime(int n)
{
    int flag = 1;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            flag = 0;
    }
    if ((n == 0) || (n == 1))
        flag = 0;
    return flag;
}
