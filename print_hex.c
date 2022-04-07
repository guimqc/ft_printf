#include "printf.h"

int	print_hex(int n, int caps)
{
	char	*s;
	int		len;

	if (n < 0)
		n *= -1;
	s = ft_itox(n, caps);
	len = ft_strlen(s);
	write(1, s, len);
	free (s);
	return (len);
}
