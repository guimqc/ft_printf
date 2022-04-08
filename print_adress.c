#include "ft_printf.h"

int	print_adress(long n)
{
	int		len;
	char	*adress;
	char	*prefix;
	char	*hexa;

	hexa = ft_itox(n, 0);
	prefix = "0x";
	adress = ft_strjoin(prefix, hexa);
	len = ft_strlen(adress);
	write(1, adress, len);
	free (hexa);
	free (adress);
	return (len);
}
