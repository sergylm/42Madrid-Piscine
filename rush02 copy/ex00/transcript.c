/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transcript.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:18:31 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/26 23:39:12 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h" 

void	alg_2(t_dict_ptr dict, char *str)
{
	char	dec[3];

	if (str[0] == '0' && str[1] != '0')
		print(find_value(dict, parse_str(&str[1], 1)));
	else if (find_value(dict, parse_str(&str[0], 2)))
		print(find_value(dict, parse_str(&str[0], 2)));
	else if (str[0] != '0' && str[1] != '0')
	{
		dec[0] = str[0];
		dec[1] = '0';
		dec[2] = 0;
		print(find_value(dict, dec));
		print(" ");
		if (str[1] != '0')
			print(find_value(dict, parse_str(&str[1], 1)));
	}
}

void	alg_3(t_dict_ptr dict, char *str)
{
	if (str[0] != '0')
	{
		print(find_value(dict, parse_str(&str[0], 1)));
		print(" ");
		print(find_value(dict, "100"));
		print(" ");
	}
	alg_2(dict, parse_str(&str[1], 2));
}

void	alg(t_dict_ptr dict, char *str)
{
	int	len;

	len = length(str);
	if (len == 1)
		print(find_value(dict, str));
	else if (len == 2)
		alg_2(dict, str);
	else
		alg_3(dict, str);
}

void	alg_x(t_dict_ptr dict, char *str)
{
	int		len;
	int		i;
	int		n;
	char	*zeros;

	len = length(str);
	n = len % 3;
	i = 0;
	while (len > 3)
	{
		if (n != 0)
			alg(dict, parse_str(&str[i], n));
		else
			alg(dict, parse_str(&str[i], 3));
		print(" ");
		while (len % 3 != 0)
			len++;
		zeros = fill_zeros(len - 3);
		print(find_value(dict, zeros));
		print(" ");
		free(zeros);
		len -= 3;
		i += 3;
	}
	alg(dict, parse_str(&str[i], len));
}
