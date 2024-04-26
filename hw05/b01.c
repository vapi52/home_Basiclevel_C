#include <stdio.h>

int main(void)
{
    const  int NUM_LIMITER = 100;
    int num = 1;
    scanf("%d", &num);
     if (num <= 0)
    {
        printf("Ваше введенное число %d не является натуральным", num);
    }
    if (num <= NUM_LIMITER)
    {
         for (int i = 1; i <= num; i++)
        {
            printf("%d %d %d\n", i, i * i, i * i * i);
        }
    }
    else
    {
        printf("Ваше введенное натуральное число превосходит %d", NUM_LIMITER);
    }
    
    return 0;
}
    
