/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:18:46 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:37:57 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "array.h"

void	printch(char ch)
{
	write(1, &ch, 1);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	print_full_square(int **square, int **inputs, int size)
{
	int	i;
	int	j;

	print("\n    ");
	print_array(inputs[0], size);
	print("\n");
	i = 0;
	while (i < size)
	{
		printch(inputs[2][i] + 48);
		print("   ");
		j = 0;
		while (j < size)
		{				
			printch(square[i][j++] + 48);
			printch(' ');
		}
		print("  ");
		printch(inputs[3][i] + 48);
		printch('\n');
		i++;
	}
	print("\n    ");
	print_array(inputs[1], size);
	print("\n");
}

void	print_square(int **square, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{				
			printch(square[i][j] + 48);
			if (j != size - 1)
				printch(' ');
			j++;
		}
		printch('\n');
		i++;
	}
}

int	error_message(void)
{
	print("Error\n");
	return (0);
}
