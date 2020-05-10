#include "darts.h"
#include <math.h>
#include <stdio.h>

uint8_t score(coordinate_t position)
{
    double distance = pow(pow(position.x, 2) + pow(position.y, 2), 0.5);
    //printf("%f", distance);

    if (distance > 10)
        return 0;
    else if (distance > 5 && distance <= 10)
        return 1;
    else if (distance > 1 && distance <= 5)
        return 5;
    else
        return 10;
}