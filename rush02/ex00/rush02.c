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
//	int	len_file;

	i = 0;
	dict = dict_new();
	fd = open_file(path);
//	len_file = file_length(fd);
//	close(fd);
//	fd = open_file(path);
//	buffer = (char *) malloc(len_file + 1);
	read(fd, &buffer, 1000);
//	close(fd);
//	printf("--%d\n", len_file);
//	printf("%c", buffer[1]);
//	buffer[3] = '\0';
//	print("aa\n");
	dict_load(dict, buffer);
	print("bb\n");
	while (i < dict->len)
	{
		print((char *) dict->entry[i].key);
		print(" ");
		print(dict->entry[i].value);
		i++;
	}
	dict_free(dict);
}
