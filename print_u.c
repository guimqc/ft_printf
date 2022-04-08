#include "ft_printf.h"

int print_u(unsigned int n)
{
    char *result;
    int len;

    result = ft_itoa(n);
    len = ft_strlen(result);
    write(1, result, len);
    free (result);

    return (len);
}
