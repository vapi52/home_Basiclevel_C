#include <stdio.h>

void reverse_string(void);

int main()
{
    reverse_string();
    return 0;
} 

    void reverse_string(void)
    {
        char c;
        if ((c = getchar()) != '.')
            reverse_string();
        if (c != '.')
            putchar(c);
    }
