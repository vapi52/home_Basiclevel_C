#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%s", "Above");
    if (a < b)
        printf("%s", "Less");
    if (a == b)
        printf("%s", "Equal");        
    return 0;
}

