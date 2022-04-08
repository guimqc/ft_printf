#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	arg_list;

	va_start(arg_list, s);
	i = -1;
	len = 0;
	while (s[++i])
	{
		if (s[i] != '%')
		{
			write(1, &s[i], 1);
			len++;
		}
		if ((s[i] == '%') && (s[i + 1] == 'c' || s[i + 1] == 's'
				|| s[i + 1] == 'p' || s[i + 1] == 'd' || s[i + 1] == 'i'
				|| s[i + 1] == 'u' || s[i + 1] == 'x' || s[i + 1] == 'X'
				|| s[i + 1] == '%'))
			len += format_and_print(arg_list, s[i++ + 1]);
	}
	va_end(arg_list);
	return (len);
}
