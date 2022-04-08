#include "ft_printf.h"

int	print_hex(unsigned int n, int caps)
{
	char	*s;
	int		len;

	if (n < 0)
		n = (n * -1) + 1;
	s = ft_itox(n, caps);
	len = ft_strlen(s);
	write(1, s, len);
	free (s);
	return (len);
}
