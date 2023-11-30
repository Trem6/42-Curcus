/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:50:22 by syaldiz           #+#    #+#             */
/*   Updated: 2023/11/07 09:50:22 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	t;

	t = 0;
	while ((s1[t] || s2[t]) && t < size)
	{
		if ((unsigned char)s1[t] > (unsigned char)s2[t])
			return (1);
		else if ((unsigned char)s1[t] < (unsigned char)s2[t])
			return (-1);
		t++;
	}
	return (0);
}
