/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:22:10 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:04:12 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "array.h"
#include "printers.h"

int	*get_col(int **matrix, int size, int col)
{
	int	i;
	int	*array;

	array = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		array[i] = matrix[i][col];
		i++;
	}
	return (array);
}

int	*get_row(int **matrix, int size, int row)
{
	int	i;
	int	*array;

	array = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		array[i] = matrix[row][i];
		i++;
	}
	return (array);
}

int	*get_reverse_col(int **matrix, int size, int col)
{
	return (reverse(get_col(matrix, size, col), size));
}

int	*get_reverse_row(int **matrix, int size, int row)
{
	return (reverse(get_row(matrix, size, row), size));
}

int	**init_matrix(int size)
{
	int	i;
	int	**matrix;

	i = 0;
	matrix = (int **) malloc(size * sizeof(int *));
	while (i < size)
	{
		matrix[i] = (int *) malloc(size * sizeof(int));
		i++;
	}
	return (matrix);
}
