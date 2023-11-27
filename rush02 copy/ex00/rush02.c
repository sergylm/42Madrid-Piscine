/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:55 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/26 23:25:14 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	start(const char *path, char *value)
{
	int		fd;
	char	buffer[1024];
	t_dict_ptr	dict;
	int	len_file;
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
	len_file = file_length(fd);
	close(fd);
	fd = open_file(path);
	read(fd, &buffer, len_file);
	buffer[len_file] = 0;
	if (!dict_load(dict, buffer))
	{
		print("Dict Error\n");
		dict_free(dict);
		return ;
	}
	alg_x(dict, value);
	dict_free(dict);
}

