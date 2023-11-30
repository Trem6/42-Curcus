/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:49:07 by syaldiz           #+#    #+#             */
/*   Updated: 2023/11/07 09:49:07 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = len;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (i-- > 0)
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
	}
	return (dst);
}
