#include <unistd.h>

void	ft_print(int i)
{
	char	ic1;
	char	ic2;

	if (i < 10)
	{
		ic1 = '0';
		ic2 = (char) i + '0';
	}
	else
	{
		ic1 = (char) i / 10 + '0';
		ic2 = (char) i % 10 + '0';
	}
	write(1, &ic1, 1);
	write(1, &ic2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			ft_print(i);
			write(1, " ", 1);
			ft_print(j);
			if (i != 99 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
//int main(){
//	ft_print_comb2();
//}
