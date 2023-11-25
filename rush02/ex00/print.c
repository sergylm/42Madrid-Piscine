/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:25 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 15:01:16 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	print(char *str)
{
	write(1, str, length(str));
}

void	print_chr(char chr)
{
	write(1, &chr, 1);
}

void	ft_read(char *str, int size)
{
	int		i;
	char	c;

	i = 0;
	while (read(0, &c, 1) == 1 && i < size - 1)
	{
		if (c == '\n')
		{
			str[i] = 0;
			return ;
		}
		str[i++] = c;
	}
	str[i] = 0;
}
