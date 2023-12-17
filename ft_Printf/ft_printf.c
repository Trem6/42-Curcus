/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:45:21 by syaldiz           #+#    #+#             */
/*   Updated: 2023/12/17 01:50:46 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_printf(char *arg)
{
	int i;

	i = 0;
	while(arg[i] != '\0')
	{
		if(arg[i] == '%')
		{
			if(arg[i + 1] == 'c') 
				ft_putchar(arg[i + 3]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	ft_printf("%c a");
}