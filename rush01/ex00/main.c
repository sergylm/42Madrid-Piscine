/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:11:18 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 20:18:55 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#include "printers.h"
#include "matrix.h"

int	main(int num, char **args)
{
	int	size;
	int	**square;
	int	**inputs;

	if (num != 2)
		return (error_message());
	size = get_size(args[1]);
	if (size == 0)
		return (error_message());
	square = init_matrix(size);
	inputs = get_inputs(args[1], size);
	find_answer(square, inputs, size);
	return (0);
}

// cc -Wall -Werror -Wextra *.c
// ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"