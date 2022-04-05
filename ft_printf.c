#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	int arg_count;

	arg_count = count_arg((char *)s);

	write(1, s, ft_strlen((char *)s));

	return (42);
}

/* 
1. count_arg
2. write until i find a %
3, if % is followed by any of those char : "cspdiuxX%", print the va_arg in the specified data type
*/
