/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:23:04 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 20:17:28 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	contains(int *nums, int size, int val)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nums[i] == val)
			return (1);
		i++;
	}
	return (0);
}

int	row_contains(int **nums, int size, int val, int row)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nums[row][i] == val)
			return (1);
		i++;
	}
	return (0);
}

int	col_contains(int **nums, int size, int val, int col)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nums[i][col] == val)
			return (1);
		i++;
	}
	return (0);
}

int	col_row_contains(int **nums, int size, int val, int *pos)
{
	if (row_contains(nums, size, val, pos[0]))
		return (1);
	if (col_contains(nums, size, val, pos[1]))
		return (1);
	return (0);
}
