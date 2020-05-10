#include "resistor_color.h"
#include <stdio.h>
#include <stdlib.h>

uint16_t color_code(resistor_band_t color)
{
    //printf("%d\n", color);
    return color;
}

const resistor_band_t *colors()
{
    resistor_band_t *all_colors = (resistor_band_t *)malloc((WHITE + 1) * sizeof(resistor_band_t));

    for (resistor_band_t i = BLACK; i <= WHITE; i++)
    {
        all_colors[i] = i;
    }
    return all_colors;
}