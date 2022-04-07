#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		print_nbr(int n);
int		print_char(char c);
int		print_str(char *s);
int		print_adress(long n);
int		print_hex(int n, int caps);
int		ft_printf(const char *s, ...);
int		format_and_print(va_list arg_list, char format);

#endif
