/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:17:29 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 20:26:13 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printers.h"
#include "contains.h"
#include "check.h"
#include "matrix.h"

void	generate_all(int **square, int **inputs, int size, int *pos);

int	get_size(char *str)
{
	int	i;
	int	nums;

	i = 0;
	nums = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			nums++;
		i++;
	}
	if (nums % 4 != 0)
		return (0);
	return (nums / 4);
}

int	**get_inputs(char *str, int size)
{
	int	i;
	int	nums;
	int	**arrs;

	i = 0;
	arrs = (int **) malloc(4 * sizeof(int *));
	while (i < 4)
	{
		arrs[i] = (int *) malloc(size * sizeof(int));
		i++;
	}
	i = 0;
	nums = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			arrs[nums / size][nums % size] = str[i] - 48;
			nums++;
		}
		i++;
	}
	return (arrs);
}

void	generate_all2(int **square, int **inputs, int size, int *pos)
{
	int	i;
	int	limits[2];
	int	new_pos[2];

	i = 0;
	while (i++ <= size)
	{
		if (col_row_contains(square, size, (i - 1), pos))
			continue ;
		limits[0] = inputs[2][pos[0]];
		limits[1] = inputs[3][pos[0]];
		square[pos[0]][pos[1]] = i - 1;
		new_pos[0] = pos[0] + (++pos[1] / size);
		new_pos[1] = pos[1] % size;
		if (pos[1]-- != size || check_row(square, size, pos[0], limits))
			generate_all(square, inputs, size, new_pos);
		if (square[0][0] == -1)
			return ;
		square[pos[0]][pos[1]] = 0;
	}
}

void	generate_all(int **square, int **inputs, int size, int *pos)
{
	int	i;

	if (pos[0] == size && pos[1] == 0)
	{
		if (check(square, size, inputs))
		{
			print_square(square, size);
			square[0][0] = -1;
		}
		return ;
	}
	i = 1;
	generate_all2(square, inputs, size, pos);
}

void	find_answer(int **square, int **inputs, int size)
{
	int	pos[2];

	pos[0] = 0;
	pos[1] = 0;
	generate_all(square, inputs, size, pos);
	if (square[0][0] != -1)
		print("Error\n");
}
