/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:14:16 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/28 13:15:39 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb--;
	}
	return (result);
}

//int main(){
//	int a = 1;
//	printf("%i", ft_iterative_factorial(a));
//}
