void	ft_putchar(char c);

void	print(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && i != 1 && j == x && j != 1))
	{
		ft_putchar('A');
	}
	else
	{
		if ((i == 1 && j == x) || (i == y && j == 1))
		{
			ft_putchar('C');
		}
		else
		{
			if (i == 1 || i == y || j == 1 || j == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
