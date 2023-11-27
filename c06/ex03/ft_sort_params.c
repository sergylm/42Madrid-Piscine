/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:29:31 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/27 20:52:56 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char *s1, char *s2)
{
	char *tmp;

	tmp = 0;
	if (ft_strcmp(s1, s2) > 0)
	{
		*tmp = *s1;
		*s1 = *s2;
		*s2 = *tmp;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = argc - 1;
	while (i < j)
	{
		while (i < j)
		{
			swap(argv[i], argv[j]);
			write(1, "aaa\n", 1);
			i++;
		}
		j--;
		i = 1;
	}
	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}
