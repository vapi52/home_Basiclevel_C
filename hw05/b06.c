#include <stdio.h>


int main()
{
    int a, b;
    int status = 0;
    scanf("%d",&a);
    while(a > 0)
    {
        b = a % 10;
        a/=10;
        if ((a % 10)==(b)) status = 1;
    }
    status == 1 ? printf("YES") : printf("NO");

    return 0;
}
