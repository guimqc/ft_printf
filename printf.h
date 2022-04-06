#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int	    print_hex(int n, int caps);
int		ft_printf(const char *s, ...);
int	    format_and_print(va_list arg_list, char format);

#endif
