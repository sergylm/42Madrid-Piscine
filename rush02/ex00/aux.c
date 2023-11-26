/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:44 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:36 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	length(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char *ft_strdup(const char *str)
{
	char	*result;
	int	len;
	int	i;

	result = 0;
	len = length((char *) str);
	result = (char *) malloc(len + 1);
	if (result)
	{
		i = 0;
		while (str[i])
		{
			result[i] = str[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}

char *parse_str(char *buffer, int size)
{
	char *result;
	int	i;

	i = 0;
	result = malloc(size + 1);
	if (result)
	{
		while (size--)
		{
			result[i] = buffer[i];
		       i++;	
		}
		result[i] = '\0';
	}
	return result;
}

int	file_length(int fd)
{
	int	c;
	int	len;

	len = 0;
	while (read(fd, &c, 1))
		len++;
	return (len);
}
