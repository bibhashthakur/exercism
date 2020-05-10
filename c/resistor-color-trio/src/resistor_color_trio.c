#include "resistor_color_trio.h"
#include "stdio.h"

resistor_value_t color_code(resistor_band_t *colors)
{
    resistor_value_t x;
    uint32_t temp;
    temp = (colors[0] * 10) + colors[1];
    //printf("%d\n", temp);
    temp *= pow(10, colors[2]);
    //printf("%d\n", temp);

    if (temp >= 1000)
    {
        x.unit = KILOOHMS;
        x.value = temp / 1000;
    }
    else
    {
        x.unit = OHMS;
        x.value = temp;
    }
    return x;
}