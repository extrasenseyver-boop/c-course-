#include <stdint.h>
#ifndef temp_api_h
#define temp_api_h
#define N 10

struct myApp
    {
        uint16_t year;
        uint8_t month;
        uint8_t day;
        uint8_t hour;
        uint8_t minutes;
        int8_t temperature;
    };

int monthTemp(uint8_t size, struct myApp entry[], uint8_t month);
int monthMinTemp(uint8_t size, struct myApp entry[], uint8_t month);
int monthMaxTemp(uint8_t size, struct myApp entry[], uint8_t month);
int yearhTemp(uint8_t size, struct myApp entry[], uint16_t year);
int yearhMinTemp(uint8_t size, struct myApp entry[], uint16_t year);
int yearhMaxTemp(uint8_t size, struct myApp entry[], uint16_t year);

#endif