#include "printf.h"

int	format_and_print(va_list arg_list, char format)
{
	int len;
	
	len = 0;
	if (format == '%')
		write(1, "%", 1);
	if (format == 'c')
		len += print_char(va_arg(arg_list, int));
	if (format == 'i' || format == 'd')
		ft_putnbr_fd((va_arg(arg_list, int)), 1);
	if (format == 's')
		ft_putstr_fd(va_arg(arg_list, char *), 1);
	if (format == 'x')
		len += print_hex(va_arg(arg_list, int), 0);
	if (format == 'X')
		len += print_hex(va_arg(arg_list, int), 1);
	if (format == 'p')
		print_adress(va_arg(arg_list, unsigned long));
	if (format == 'u')
		return (0);
	return (len);
}
