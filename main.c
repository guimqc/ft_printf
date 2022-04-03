#include "printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_printf((const char *)argv[1]);
		printf("(real) %s", argv[1]);
	}
	else
		printf("arg error");
}
