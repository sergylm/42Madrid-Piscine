/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:41:56 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:04:38 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printers.h"

int	*reverse(int *array, int size)
{
	int	i;
	int	*reverse;

	reverse = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		reverse[i] = array[size - i - 1];
		i++;
	}
	return (reverse);
}

void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printch(array[i] + 48);
		printch(' ');
		i++;
	}
	printch('\n');
}
