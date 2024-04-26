#include <stdio.h>

int main(void)
{
    int a;
    int status = 1;
    scanf("%d", &a);

    if (a > 1)
    {
        for(int i = 2; i < a; i++)
        {
            if(a % i == 0)
            {
                status = 0;
                break;
            }
        }
    }
    else
    {
        status = 0;
    }
    printf("%s", status == 1 ? "YES" : "NO");
    return 0;
}
