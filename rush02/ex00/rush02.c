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

void	start(const char *path)
{
	int		fd;
	char	buffer[1000];
	T_dict_ptr	dict;
	int	i;

	i = 0;
	dict = dict_new();
	fd = open_file(path);
	read(fd, &buffer, 1000);
	dict_load(dict, buffer);
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
