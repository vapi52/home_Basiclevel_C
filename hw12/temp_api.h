#ifndef TEMP_API_H
#define TEMP_API_H
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>


typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
} sensor;

int command_line_handler(int argc, char *argv[], FILE **input, uint8_t *month);
int8_t stat_month(uint8_t month, bool (*find_cond)(int8_t, int8_t), sensor data[], uint32_t data_len);
int8_t stat_year(uint16_t year, bool (*find_cond)(int8_t, int8_t), sensor data[], uint32_t data_len);
long get_num(char **ch, bool *ok);
sensor from_csv_line(char *line, bool *ok);

uint64_t from_csv(sensor arr[], uint64_t max_arr_size, FILE *input, uint64_t max_line_size);
void add_data(sensor arr[], uint64_t *arr_len, sensor data);
sensor remove_data(sensor arr[], uint64_t *arr_len, uint64_t rav);
void sort_arr(sensor arr[], uint64_t arr_len);
void print_sensor_data(sensor data);
void print_sensor_data_arr(sensor arr[], uint64_t arr_len);

float avg_month(uint8_t month, sensor data[], uint32_t data_len);
int8_t min_month(uint8_t month, sensor data[], uint32_t data_len);
int8_t max_month(uint8_t month, sensor data[], uint32_t data_len);
float avg_year(uint16_t year, sensor data[], uint32_t data_len);
int8_t min_year(uint16_t year, sensor data[], uint32_t data_len);
int8_t max_year(uint16_t year, sensor data[], uint32_t data_len);

#endif
