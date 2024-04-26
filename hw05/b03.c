#include <stdio.h>

int main(void)
{
    const  int NUM_LIMITER = 100;
    int a , b, sum;
    sum = 0;
    scanf("%d%d", &a, &b);
     if (a <= 0 || b <= 0 ||a > NUM_LIMITER || b > NUM_LIMITER)
    {
        printf("Введенные данные %d %d не являются числом по модулю.\nПрограмма завершена.", a, b);
    }
    else if (a <= NUM_LIMITER && b <= NUM_LIMITER && a <= b)
    {
         for (int i = a; i <= b; i++)
        {
            sum += i * i;
        }
        printf("%d", sum);
    }
    else if (a > NUM_LIMITER && b > NUM_LIMITER)
    {
        printf("Введенные данные превосходят %d\n", NUM_LIMITER);
    }
    else if (a > b)
    {
        printf("Введенные данные не удовлетворяют условию задачи a <= b  %d > %d\n", a, b);
    }
    else
    {
        printf("Ура!!! Я завис???");
    }
       
    return 0;
}
    
