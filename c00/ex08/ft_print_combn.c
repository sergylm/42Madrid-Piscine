#include <unistd.h>

void	get_min_max(int n, int *min, int *max)
{
	int	i;
	int	mul;

	i = n - 2;
	mul = 1;
	*max = 1;
	*min = 1;
	while (i-- + 2)
		*max *= 10;
	*max -= 1;
	i = n - 1;
	while (i-- + 1)
	{
		*max = *max - ((n - i - 2) * mul);
		mul *= 10;
	}
	i = n - 1;
	while (i-- - 1)
		*min = *min * 10 + (n - i);
}

void	zeros(int i, int n, int *zero)
{
	int	mul;

	mul = 1;
	while (n-- - 1)
		mul *= 10;
	if (i < mul)
		write(1, "0", 1);
	else
		*zero = 0;
}

int	check_number(int i)
{
	int	finish;
	int	tmp;

	tmp = i;
	finish = 1;
	while (tmp / 10 != 0 && finish)
	{
		if (tmp % 10 <= (tmp / 10) % 10)
			finish = 0;
		tmp /= 10;
	}
	return (finish);
}

void	print(int i)
{
	char	ic;

	if (i < 10)
	{
		ic = (char) i + '0';
		write(1, &ic, 1);
	}
	else
	{
		print(i / 10);
		print(i % 10);
	}
}

void	ft_print_combn(int n)
{
	int	min;
	int	max;
	int	zero;

	zero = 1;
	get_min_max(n, &min, &max);
	while (min < max)
	{
		if (check_number(min))
		{
			if (zero)
				zeros(min, n, &zero);
			print(min);
			write(1, ", ", 2);
		}
		min++;
	}
	print(max);
}
//int	main(void)
//{
//	ft_print_combn(2);
//}
