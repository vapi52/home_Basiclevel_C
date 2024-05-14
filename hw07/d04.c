#include <stdio.h>

void print_num(int num);

int main(void)
{
    int number;
    scanf("%d",&number);
    if(number > 0)
        print_num(number);
    else
        printf("0\n");
    return 0;
}

void print_num(int num)
{
    if(num)
    {
        print_num(num / 10);
        printf("%d ",num % 10);
    }
}
