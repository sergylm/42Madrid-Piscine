/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:51 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 16:37:07 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	options(char option)
{
	if (option == '1')
		start("numbers.dict");
	else if (option == '2')
		print("jooer\n");
}

void	ft_select(void)
{
	char	input[1];
	char	new_dict[100];

	print("Choose a dictionary:\n");
	print("(Introduce a nummber)\n");
	print("1. English\n");
	print("X. New\n");
	ft_read(input, 2);
	while (input[0] != '1' && input[0] != 'X' && input[0] != 'x')
	{
		print("Select an option (number)\n");
		ft_read(input, sizeof input + 1);
	}
	if (input[0] == 'X' || input[0] == 'x')
	{
		print("Introduce the path to the new dictionary: ");
		ft_read(new_dict, sizeof new_dict);
		print(new_dict);
	}
	else
	{
		options(input[0]);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_select();
	}
	else if (argc == 2)
	{
		print(argv[1]);
	}
	else if (argc == 3)
	{
		print(argv[1]);
		print(argv[2]);
	}
	else
	{
		print("Error\n");
	}
}
