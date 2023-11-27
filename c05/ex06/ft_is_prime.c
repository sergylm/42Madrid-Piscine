/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:32:00 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/22 12:41:19 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 3)
		return (0);
	i = 2;
	while (i <= nb / 2)
		if (nb % i++ == 0)
			return (0);
	return (1);
}
//
//int main(){
//	int a = 4;
//
//	printf("%i", ft_is_prime(a));
//}
