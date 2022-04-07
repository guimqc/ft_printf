#include "printf.h"

int	print_nbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_itoa(n);
	len = ft_strlen(nbr);
	write(1, nbr, len);
	free (nbr);
	return (len);
}
