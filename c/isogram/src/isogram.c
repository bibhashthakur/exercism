#include "isogram.h"
#include "string.h"
#include "stdint.h"
#include "ctype.h"

bool is_isogram(const char phrase[])
{
    if (phrase == NULL)
    {
        return false;
    }

    int n = strlen(phrase);
    uint8_t arr[26] = {0};
    char c;

    for (int i = 0; i < n; i++)
    {
        c = phrase[i];
        if (isalpha(c))
        {
            if (arr[tolower(c) - 'a'] >= 1)
            {
                return false;
            }
            arr[tolower(c) - 'a']++;
        }
    }
    return true;
}