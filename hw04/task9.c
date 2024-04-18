#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
    uint8_t month_num;

    scanf("%" SCNu8, &month_num);

    if (month_num == 12 || month_num == 1 || month_num == 2)
    {
        printf("winter");
    }

    if (month_num == 3 || month_num == 4 || month_num == 5)
    {
        printf("spring");
    }

    if (month_num == 6 || month_num == 7 || month_num == 8)
    {
        printf("summer");
    }

    if (month_num == 9 || month_num == 10 || month_num == 11)
    {
        printf("autumn");
    }

    return 0;
}


