#include "printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	write(1, s, ft_strlen((char *)s));
	write(1, "\n", 1);

	return (42);
}
