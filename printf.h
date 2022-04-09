/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:52:25 by gvial             #+#    #+#             */
/*   Updated: 2022/04/09 18:52:27 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		print_percent(void);
int		print_c(char c);
int		print_s(char *s);
int		print_nbr(int n);
int		print_u(unsigned int n);
int		print_p(unsigned long n);
int		ft_printf(const char *s, ...);
int		print_x(unsigned int n, int caps);
int		format_and_print(va_list arg_list, char format);

#endif
