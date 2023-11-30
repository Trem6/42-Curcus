/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:50:33 by syaldiz           #+#    #+#             */
/*   Updated: 2023/11/07 09:50:33 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s + start))
		len = (unsigned int)ft_strlen(s + start);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL || !s)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			cpy[j] = s[i];
			j++;
		}
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
