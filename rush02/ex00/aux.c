/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:44 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:36 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
