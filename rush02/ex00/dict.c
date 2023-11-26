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

void	dict_free(T_dict_ptr dict)
{
	int	i;

	i = 0;
	while (i < dict->len)
	{
		free((char *) dict->entry[i].key);
		free(dict->entry[i].value);
		i++;
	}
	free(dict->entry);
	free(dict);
}

int	dict_find_index(T_dict_ptr dict, const char *key)
{
	int	i;

	i = 0;
	while (i < dict->len)
	{
		if (!ft_strcmp(dict->entry[i].key, key))
			return (i);
		i++;
	}
	return (-1);
}

void	dict_add(T_dict_ptr dict, const char* key, char *value)
{
	int	idx;

	idx = dict_find_index(dict, key);
	if (idx != -1)
	{
		dict->entry[idx].value = value;
	}
	dict->entry[dict->len].key = ft_strdup(key);
	dict->entry[dict->len].value = ft_strdup(value);
	dict->len++;
}

int	dict_load(T_dict_ptr dict, char *buffer)
{
	char	*key;
	char	*value;
	int	nkey;
	int	nvalue;
	
	nkey = 0;
	nvalue = 0;
	while (*buffer)
	{
		key = buffer;
		while (*buffer++ != ':')
		{
			nkey++;
			while (*buffer == ' ')
				buffer++;
		}
		while (*buffer == ' ')
			buffer++;
		value = buffer;
		while (*buffer++ != '\n')
			nvalue++;
		if (!check_number(parse_str(key, nkey)))
			return (0);
		dict_add(dict, (const char *) parse_str(key, nkey), parse_str(value, nvalue));
		nkey = 0;
		nvalue = 0;
	}
	return (1);
}
