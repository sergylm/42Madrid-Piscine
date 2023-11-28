/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:36:06 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/28 20:19:52 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	cap;

	*range = 0;
	if (min >= max)
		return (0);
	i = 0;
	if (max < 0)
		cap = min * -1 + max * -1;
	else if (min < 0)
		cap = max + min * -1;
	else
		cap = max - min;
	*range = malloc(cap * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		printf("a\n");
		printf("%d-", min);
		*range[i] = min;
		i++;
		min++;
	}
	return (i);
}

int main(){
	int *array;
	int	size;
	
	size = ft_ultimate_range(&array, 0, 10); 
//	while (*array)
//	{
//		printf("%d", *array);
//		array++;
//	}
	printf("\n%d", size);
}
