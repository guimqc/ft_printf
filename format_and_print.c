#include "printf.h"

int	format_and_print(va_list arg_list, char format)
{
	int len;
	
	len = 0;
	if (format == '%')
		write(1, "%", 1);
	if (format == 'c')
		ft_putchar_fd(va_arg(arg_list, int), 1);
	if (format == 'i' || format == 'd')
		ft_putnbr_fd((va_arg(arg_list, int)), 1);
	if (format == 's')
		ft_putstr_fd(va_arg(arg_list, char *), 1);
	if (format == 'x')
		ft_putstr_fd(itox(va_arg(arg_list, int), 0), 1);
	if (format == 'X')
		ft_putstr_fd(itox(va_arg(arg_list, int), 1), 1);
	return (len);
}
