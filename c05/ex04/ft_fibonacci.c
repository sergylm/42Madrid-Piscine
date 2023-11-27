/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:40:28 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/22 11:59:43 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0 || index - 2 < 0)
		return (0);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
//
//int main(){
//	int i = 0;
//	while (i < 20)
//		printf("%i ", ft_fibonacci(i++));
//}
