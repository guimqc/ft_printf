#ifndef PRINTF_H
# define PRINTF_H

#include "libft/libft.h"

char    *itox(int n, int caps);
int     ft_printf(const char *s, ...);
int     count_arg(char *s);

# endif