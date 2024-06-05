#include <inttypes.h>
#define SIZE 50

typedef struct 
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
}sensor;

typedef struct 
{
    uint32_t count;
    int8_t average_temperature;
    int8_t min_temperature;
    int8_t max_temperature;
}st_month;

void stat_month(void);
void stat_year(void);
float avg_month(void);
float avg_year(void);
float max_month(void);
float max_year(void);
float min_month(void);
float min_year(void);

