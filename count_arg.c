#include "printf.h"

int count_arg(char *s)
{
    size_t i;
    int count;

    i = -1;
    count = 0;
    while (++i < ft_strlen(s))
        if ((s[i] == '%') && (s[i + 1] == 'c' || s[i + 1] == 's' || s[i + 1] == 'p' 
            || s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u' || s[i + 1] == 'x' 
            || s[i + 1] == 'X' || s[i + 1] == '%'))
            count++;
    return (count);
}
