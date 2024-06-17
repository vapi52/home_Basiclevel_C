#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_api.h"

const int MAX_ROWS = 520000;
const int MAX_LINE_LENGTH = 1000;

int main(int argc, char *argv[])
{
    FILE *input;
    uint8_t month = 0;
    _Bool year = true;
    command_line_handler(argc, argv, &input, &month);
    sensor data_arr[MAX_LINE_LENGTH];
    uint64_t rav = from_csv(data_arr, MAX_ROWS, input, MAX_LINE_LENGTH);
    

    if (rav > 0)
    {       

        if (month != 0)
        {
            printf("\nStatistics for month:\n");
            printf("Average temperature: %.2f\n", avg_month(month, data_arr, rav));
            printf("Minimum temperature: %d\n", min_month(month, data_arr, rav));
            printf("Maximum temperature: %d\n", max_month(month, data_arr, rav));
        }
        else
        {
            if (rav >= 2)
            {
                sensor removed = remove_data(data_arr, &rav, rav - 2);
                printf("\nRemoved data: ");
                print_sensor_data(removed);
            }
            sensor to_add = {2000, 8, 16, 1, 1, 20};
            add_data(data_arr, &rav, to_add);

            sort_arr(data_arr, rav);
            printf("\nSorted array:\n");
            print_sensor_data_arr(data_arr, rav);

            if(year)
            {
                printf("\nStatistics for year:\n");
                printf("Average temperature: %.2f\n", avg_year(year, data_arr, rav));
                printf("Minimum temperature: %d\n", min_year(year, data_arr, rav));
                printf("Maximum temperature: %d\n", max_year(year, data_arr, rav));
            }
            
            
        }
    }
    return 0;
}
