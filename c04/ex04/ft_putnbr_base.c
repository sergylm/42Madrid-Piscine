//#include <unistd.h>

int	check_dupli_simbols(char *str)
{
	char	*i;

	while (*str)
	{
		i = &*str;
		if (*i == ' ' || *i == '+' || *i == '-')
			return (1);
		while (*str++)
		{
			if (*i == *str++)
				return (1);
		}
		i++;
		str = &*i;
	}
	return (0);
}

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print(unsigned int i, unsigned int mod, char *base)
{
	if (i < mod)
	{
		write(1, &base[i], 1);
	}
	else
	{
		print(i / mod, mod, base);
		print(i % mod, mod, base);
	}
}

void	ft_putnbr(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	len;

	len = length(base);
	if (len > 1 && !check_dupli_simbols(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			i = nbr * -1;
		}
		print(i, len, base);
	}
}

//int main(){
//	int nbr = -2147483648;
//	char *dec = "0123456789";
//	char *bin = "01";
//	char *hex = "0123456789ABCDEF";
//	char *custom = "poniguay";
//
//	ft_putnbr(nbr, dec);
//}
