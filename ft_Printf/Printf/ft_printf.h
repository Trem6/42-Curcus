/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:30:40 by syaldiz           #+#    #+#             */
/*   Updated: 2024/01/08 23:32:40 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_putchar(char c);
int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putpoint(unsigned long a, int sign);
int		ft_puthex(unsigned long int a, char c);
int		ft_putnbr(long int a);
int		ft_putunsigned(unsigned long int a);

#endif