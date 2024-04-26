#include <stdio.h>

int main(void)
{
    int a, d1 = 3, counter =0;
    scanf("%d",&a);
    if (a <= 0)
    {
        printf("Введенное число %d не положительное,что не удовлетворяют условию задачи\n", a);
    }
    else if (a > 0)
    {
        do
            {
                counter++;
            } while(a/=10);
        (counter == d1) ? printf("YES") : printf("NO");
   }  
    return 0;
}
