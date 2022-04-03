#include "printf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
	write(1, s, ft_strlen((char *)s));
	write(1, "\n", 1);

	return (42);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_printf((const char *)argv[1]);
		printf("printf = %s\n", argv[1]);
	}
	else
		printf("arg error");
}
