#include <unistd.h>

int	length(int n)
{
	int	len;

	len = 1;
	while (n > 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	zeros(int n, int max)
{
	int	i;
	int	fill;

	i = 0;
	fill = length(max) - length(n);
	while (i < fill)
	{
		write(1, "0", 1);
		i++;
	}
}

void	ft_print(int n)
{
	char	c;

	if (n < 10)
	{
		c = (char) n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_print(n / 10);
		ft_print(n % 10);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;

	i = 1;
	max = 10;
	while (i < n)
	{
		max *= 10;
		i++;
	}
	i = 0;
	while (i < max)
	{
		zeros(i, max -1);
		ft_print(i);
		if (i != max - 1)
		{
			write(1, ", ", 2);
		}
		i++;
	}
}
//int	main(void)
//{
//	ft_print_combn(4);
//}
