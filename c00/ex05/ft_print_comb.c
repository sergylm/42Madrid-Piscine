#include <unistd.h>

void	print_chars(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			if (i == j)
			{
				continue ;
			}
			while (k <= 9)
			{
				if (i++ == k || j++ == k++)
				{
					continue ;
				}
				print_chars((char)i, (char)j, (char)k);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
