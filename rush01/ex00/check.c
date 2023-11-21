/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:46:39 by msantill          #+#    #+#             */
/*   Updated: 2023/11/19 18:37:15 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printers.h"
#include "matrix.h"

int	count(int *array, int size)
{
	int	i;
	int	buildings;
	int	max;

	i = 0;
	buildings = 0;
	max = 0;
	while (i < size)
	{
		if (array[i] > max)
		{
			buildings++;
			max = array[i];
		}
		i++;
	}
	return (buildings);
}

int	check_row(int **square, int size, int row, int *limits)
{
	int	buildings_left;
	int	buildings_right;

	buildings_left = count(get_row(square, size, row), size);
	buildings_right = count(get_reverse_row(square, size, row), size);
	return (buildings_left == limits[0] && buildings_right == limits[1]);
}

int	check_col(int **square, int size, int col, int *limits)
{
	int	buildings_top;
	int	buildings_bottom;

	buildings_top = count(get_col(square, size, col), size);
	buildings_bottom = count(get_reverse_col(square, size, col), size);
	return (buildings_top == limits[0] && buildings_bottom == limits[1]);
}

int	check(int **square, int size, int **inputs)
{
	int	i;
	int	chk_row;
	int	chk_col;
	int	limits[2];

	i = 0;
	while (i < size)
	{
		limits[0] = inputs[2][i];
		limits[1] = inputs[3][i];
		chk_row = check_row(square, size, i, limits);
		limits[0] = inputs[0][i];
		limits[1] = inputs[1][i];
		chk_col = check_col(square, size, i, limits);
		if (chk_col == 0 || chk_row == 0)
			return (0);
		i++;
	}
	return (1);
}
