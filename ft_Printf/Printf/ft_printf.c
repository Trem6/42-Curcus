/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:45:21 by syaldiz           #+#    #+#             */
/*   Updated: 2024/01/08 23:59:06 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_format(va_list *args, char c)
{
	if (c == 'u')
		return (ft_putunsigned(va_arg((*args), unsigned int)));
	else if (c == 'c')
		return (ft_putchar(va_arg((*args), int)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg((*args), int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg((*args), unsigned int), c));
	else if (c == 'p')
		return (ft_putpoint(va_arg((*args), unsigned long), 1));
	else if (c == 's')
		return (ft_putstr(va_arg((*args), char *)));
	else
		return (ft_putchar('%'));
}

int	ft_flag_bool(const char *str, int i)
{
	return (str[i] == '%' && (str[i + 1] == 'c' || str[i + 1] == 'd'
			|| str[i + 1] == 'i' || str[i + 1] == 'u'
			|| str[i + 1] == 'x' || str[i + 1] == 'X'
			|| str[i + 1] == 'p' || str[i + 1] == 's' || str[i + 1] == '%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		total;
	int		tmp;

	i = -1;
	tmp = 0;
	total = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, str);
	while (str[++i])
	{
		if (ft_flag_bool(str, i))
			tmp += ft_format(&args, str[++i]);
		else
			tmp += ft_putchar(str[i]);
		if (tmp == -1)
			return (-1);
		total = tmp;
	}
	va_end(args);
	return (total);
}
