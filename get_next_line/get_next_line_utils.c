/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaldiz <syaldiz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:25:22 by syaldiz           #+#    #+#             */
/*   Updated: 2024/01/09 00:02:32 by syaldiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return (s + i);
	return (NULL);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	i;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin(char *str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*s;

	if (!str || !buff)
		return (NULL);
	s = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(buff)) + 1));
	if (!s)
	{
		free(str);
		return (NULL);
	}
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		s[i] = str[i];
	while (buff[j] != '\0')
		s[i++] = buff[j++];
	s[ft_strlen(str) + ft_strlen(buff)] = '\0';
	free(str);
	return (s);
}
