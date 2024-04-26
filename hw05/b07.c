#include <stdio.h>

int main() {
    int a, dn, d;
    scanf("%d", &a);
    while (a > 0)
    {
        d = a % 10;
        dn = a / 10;
        while (dn > 0)
        {
            if (d == dn % 10)
            {
                printf("YES\n");
                return 0;
            }
            dn /= 10;
        }
        a /= 10;
    }
    printf("NO\n");
    return 0;
}
