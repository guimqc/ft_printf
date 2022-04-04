#include "printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	int arg_count;

	arg_count = count_arg((char *)s);
	printf("arg count: %i\n", arg_count);

	write(1, s, ft_strlen((char *)s));

	return (42);
}
