#include "acronym.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

char *abbreviate(const char *phrase)
{
    if (phrase == NULL)
        return NULL;
    int n = strlen(phrase);
    if (n == 0)
        return NULL;

    char *acronym = (char *)malloc(n * sizeof(char));

    int j = 0;
    if (isalpha(phrase[0]))
    {
        acronym[j] = toupper(phrase[0]);
        j++;
    }

    for (int i = 1; i < n; i++)
    {
        if (phrase[i - 1] == ' ' || phrase[i - 1] == '-')
        {
            if (isalpha(phrase[i]))
            {
                acronym[j] = toupper(phrase[i]);
                j++;
            }
        }
    }

    acronym[j] = '\0';
    return acronym;
}
