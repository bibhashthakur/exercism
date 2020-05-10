#include "armstrong_numbers.h"
#include <math.h>

int is_armstrong_number(int n)
{
    int digits = 1;
    int temp = n;
    int sum = 0;
    int digit;

    digits = floor(log10(n) + 1);
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        return 1;
    return 0;
}