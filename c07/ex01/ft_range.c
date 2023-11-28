/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:57:07 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/28 19:15:07 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	cap;

	array = 0;
	if (min >= max)
		return (array);
	i = 0;
	if (max < 0)
		cap = min * -1 + max * -1;
	else if (min < 0)
		cap = max + (min * -1);
	else
		cap = max - min;
	array = malloc(cap * sizeof(int));
	if (array)
	{
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}
//
//int main()
//{
//	int *array;
//	int min = -2;
//	int max = 10;
//	int i = 0;
//
//	array = ft_range(min, max);
//	printf("\n");
//	while(min < max)
//	{
//		printf("%d ", array[i]);
//		i++;
//		min++;
//	}
//}
