#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

void format_and_print(va_list arg_list, char format)
{
	if (format == '%')
		write(1, "%", 1);
	if (format == 'c')
		ft_putchar_fd(va_arg(arg_list, int), 1);
}

int	ft_printf(const char *s, ...)
{
	int i;
	va_list arg_list;

	va_start(arg_list, s);
	i = -1;
	while (s[++i])
	{
		if (s[i] != '%')
			write(1, &s[i], 1);
		if ((s[i] == '%') && (s[i + 1] == 'c' || s[i + 1] == 's' || s[i + 1] == 'p' 
			|| s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u' || s[i + 1] == 'x' 
			|| s[i + 1] == 'X' || s[i + 1] == '%'))
			format_and_print(arg_list, s[i++ + 1]);

	}
	va_end(arg_list);
	return (42);
}

/*
"this %s a test to %d if my %c %p %i %u %x %X %%\n"
(s[i + 1] == 'c' || s[i + 1] == 's' || s[i + 1] == 'p' 
|| s[i + 1] == 'd' && s[i + 1] == 'i' || s[i + 1] == 'u' || s[i + 1] == 'x' 
|| s[i + 1] == 'X' || s[i + 1] == '%')

1. count_arg to use later
2. write until i find a %
3, if % is followed by any of those char : "cspdiuxX%", print the va_arg in the specified data type, else print %
*/
