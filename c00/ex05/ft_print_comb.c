#include <unistd.h>

void	print_chars(int i, int j, int k)
{
	char	ic;
	char	jc;
	char	kc;

	ic = (char) i + '0';
	jc = (char) j + '0';
	kc = (char) k + '0';
	if (i == 7 && j == 8 && k == 9)
	{
		write(1, "789", 3);
	}
	else
	{
		write(1, &ic, 1);
		write(1, &jc, 1);
		write(1, &kc, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				if (i != j && i != k && j != k)
				{
					print_chars(i, j, k);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
