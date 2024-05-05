#include <stdio.h>

int nod(int, int);

int main()
{
    int number1, number2;
    scanf("%d %d",&number1, &number2);
    printf("%d\n",nod(number1, number2));
    return 0;
}

int nod(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
