/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:31:54 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/28 16:21:03 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb < 0)
		return (0);
	while (i <= nb / 3 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
//
//int main(){
//	int a = 2147483647;
//
//	printf("%i", ft_sqrt(a));
//}
