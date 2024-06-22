#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

const int MAX_ROWS = 519000;
const int MAX_LINE_LENGTH = 1000;

int main(int argc, char *argv[])
{
    FILE *input;
    uint8_t month = 0;
    command_line_handler(argc, argv, &input, &month);
    sensor* data_arr = malloc(MAX_ROWS*sizeof(sensor));
    if(!data_arr)
    {
        printf("Not enogth memory\n");
        return -1;
    }
    uint64_t number_of_err = 0;
    uint64_t rav = from_csv(data_arr, MAX_ROWS, input, MAX_LINE_LENGTH, &number_of_err);
    if (rav > 0)
    {   
        if (month)
        {
            printf("# Year Month NuValue ErValue MonthAvg MonthMax MonthMin\n");
            printf("1 %4u  %2u   %5lld   %5lld   %6.2f      %3d      %3d\n", data_arr[0].year, month, count_month(month, data_arr, rav), number_of_err, avg_month(month, data_arr, rav), max_month(month, data_arr, rav), min_month(month, data_arr, rav));
        }
        else
        {
            printf(" # Year Month NuValue ErValue MonthAvg MonthMax MonthMin\n");
            for (uint8_t i = 1; i <= 12; i++)
                printf("%2d %4u    %2u   %5lld   %5lld   %6.2f      %3d      %3d\n", i, data_arr[0].year, i, count_month(i, data_arr, rav), number_of_err, avg_month(i, data_arr, rav), max_month(i, data_arr, rav), min_month(i, data_arr, rav));
            printf("\nStatistics for year:\n");
            printf("\tAverage temperature: %6.2f\n", avg_year(data_arr[0].year, data_arr, rav));
            printf("\tMinimum temperature: %6d\n", min_year(data_arr[0].year, data_arr, rav));
            printf("\tMaximum temperature: %6d\n", max_year(data_arr[0].year, data_arr, rav));
        }
    }
    free(data_arr);
    return 0;
}
