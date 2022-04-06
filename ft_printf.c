#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	arg_list;

	va_start(arg_list, s);
	i = -1;
	while (s[++i])
	{
		if (s[i] != '%')
			write(1, &s[i], 1);
		if ((s[i] == '%') && (s[i + 1] == 'c' || s[i + 1] == 's'
				|| s[i + 1] == 'p' || s[i + 1] == 'd' || s[i + 1] == 'i'
				|| s[i + 1] == 'u' || s[i + 1] == 'x' || s[i + 1] == 'X'
				|| s[i + 1] == '%'))
			format_and_print(arg_list, s[i++ + 1]);
	}
	va_end(arg_list);
	return (42);
}
