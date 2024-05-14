#include <stdio.h>

void sequenceNumbers(int);

int main()
{
    int num;
    scanf ("%d", &num) ;
    sequenceNumbers(num);
    return 0;
} 
    void sequenceNumbers(int n)
    {
        if (n > 1)
             sequenceNumbers(n-1);
        printf("%d ", n);
    }
