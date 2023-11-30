/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:50:30 by syaldiz           #+#    #+#             */
/*   Updated: 2023/11/07 09:50:30 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	size_t		i;
	size_t		j;
	char		*dest;

	size = ft_strlen(s1);
	i = 0;
	j = -1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < size)
		i++;
	if (i == size)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[size - 1]) && size > 0)
		size--;
	dest = (char *)malloc (size - i + 1);
	if (dest == NULL)
		return (NULL);
	while ((i + ++j) < size)
		dest[j] = s1[i + j];
	dest[j] = '\0';
	return (dest);
}
