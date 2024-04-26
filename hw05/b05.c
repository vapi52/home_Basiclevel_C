#include <stdio.h>

int main(void) 
{ 
    int a, sum =0; 
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Введенное число %d не положительное,что не удовлетворяют условию задачи\n", a);
    }
    else if (a >= 0)
    {
        while (a > 0) 
        { 
            sum += a % 10; 
            a /= 10; 
        } 
   } 
    printf("%d", sum); 
    return 0; 
}
