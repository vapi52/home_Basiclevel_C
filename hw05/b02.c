#include <stdio.h>

int main(void)
{
    const  int NUM_LIMITER = 100;
    int a , b;
    scanf("%d%d", &a, &b);
     if (a <= 0 || b <= 0)
    {
        printf("Введенные данные %d %d не являются числом по модулю\n", a, b);
    }
   if (a <= NUM_LIMITER && b <= NUM_LIMITER && a <= b)
    {
         for (int i = a; i <= b; i++)
        {
            printf("%d ",  i * i);
        }
    }
    else
    {
        printf("Введенные данные превосходят %d\n", NUM_LIMITER);
    }
    
    return 0;
}
    
