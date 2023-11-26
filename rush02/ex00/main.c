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

void	options(char option, char *str)
{
	char	value[38];
	
	print("Introduce a number");
	ft_read(value, sizeof value);
	if (option == '1')
		start(ENGLISH, value);
	else if (option == '2')
		print("jooer\n");
	else if (option == 'X' || option == 'x')
		start(str, value);
}

void	ft_select(void)
{
	char	input[1];
	char	new_dict[100];

	print("Choose a dictionary:\n");
	print("(Introduce a number)\n");
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
		printf("Dictionary: ");
		print(new_dict);
	}
	else
	{
		options(input[0], 0);
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
		start(ENGLISH, argv[1]);
	}
	else if (argc == 3)
	{
		start(argv[1], argv[2]);
	}
	else
	{
		print("Error\n");
	}
}
