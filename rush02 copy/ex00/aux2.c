/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:45:13 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/26 23:04:40 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*fill_zeros(int n)
{
	char	*zeros;
	int		i;

	zeros = malloc(n + 2);
	i = 1;
	if (zeros)
	{
		zeros[0] = '1';
		while (n-- > 0)
		{
			zeros[i] = '0';
			i++;
		}
		zeros[i] = '\0';
		return (zeros);
	}
	return (0);
}
