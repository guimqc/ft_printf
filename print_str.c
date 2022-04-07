#include "printf.h"

int	print_str(char *s)
{
	int	len;

	len = ft_strlen(s);
	write (1, s, len);
	return (len);
}
