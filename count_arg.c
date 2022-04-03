#include "printf.h"

int count_arg(char *s)
{
    size_t i;
    int count;

    i = 0;
    count = 0;
    while (i < ft_strlen(s))
        if (s[i++] == '%')
            count++;
    return (count);
}