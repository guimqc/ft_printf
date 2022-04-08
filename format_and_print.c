#include "ft_printf.h"

int	format_and_print(va_list arg_list, char format)
{
	int	len;

	len = 0;
	if (format == '%')
		len += print_percent();
	if (format == 'c')
		len += print_char(va_arg(arg_list, int));
	if (format == 'i' || format == 'd')
		len += print_nbr(va_arg(arg_list, int));
	if (format == 's')
		len += print_str(va_arg(arg_list, char *));
	if (format == 'x')
		len += print_hex(va_arg(arg_list, unsigned int), 0);
	if (format == 'X')
		len += print_hex(va_arg(arg_list, int), 1);
	if (format == 'p')
		len += print_adress(va_arg(arg_list, long));
	if (format == 'u')
		len+= print_u(va_arg(arg_list, unsigned int));
	return (len);
}
