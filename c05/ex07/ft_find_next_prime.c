/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:47:23 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/28 13:38:55 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	end;

	end = 2147483647;
	while (nb < end)
		if (ft_is_prime(nb++) == 1)
			return (--nb);
	return (end);
}
//
//int main(){
//	int a = 0;
//
//	printf("%i", ft_find_next_prime(a));
//}
