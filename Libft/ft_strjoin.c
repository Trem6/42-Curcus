/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:50:08 by syaldiz           #+#    #+#             */
/*   Updated: 2023/11/07 09:50:08 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*dest;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(len1 + len2 + 1);
	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = ((char *)s1)[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = ((char *)s2)[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
