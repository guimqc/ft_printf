#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int     print_percent();
int		print_nbr(int n);
int		print_c(char c);
int		print_s(char *s);
int		print_p(long n);
int		print_u(unsigned int);
int		print_x(unsigned int n, int caps);
int		ft_printf(const char *s, ...);
int		format_and_print(va_list arg_list, char format);

#endif
