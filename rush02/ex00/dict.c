/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:33 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 17:42:53 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

T_dict_ptr	dict_new(void)
{
	T_dict proto;
	T_dict_ptr d;
	
	proto.len = 0;
	proto.cap = 41;
	proto.entry = malloc(41 * sizeof(T_dict_entry));
	d = malloc(sizeof(T_dict));
	*d = proto;
	return (d);
}

void	dict_free(T_dict dict)
{
	int	i;

	i = 0;
	while (i < dict.len)
	{
		free(&dict.entry[i].key);
		i++;
	}
	free(dict.entry);
	free(&dict);
}
