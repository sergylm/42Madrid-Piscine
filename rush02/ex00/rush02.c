/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:55 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 17:44:32 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	start(const char *path, char *value)
{
	int		fd;
	char	buffer[1000];
	T_dict_ptr	dict;
	int	i;

	if (!check_number(value))
	{
		print("Error\n");
		return ;
	}
	i = 0;
	dict = dict_new();
	fd = open_file(path);
	if (fd == -1)
	{
		print("Dict Error\n");
		return ;
	}
	read(fd, &buffer, 1000);
	if (!dict_load(dict, buffer))
	{
		print("Dict Error\n");
		dict_free(dict);
		return ;
	}
	while (i < dict->len)
	{
		print((char *) dict->entry[i].key);
		print(":");
		print(dict->entry[i].value);
		printf("\n");
		i++;
	}
	dict_free(dict);
}

