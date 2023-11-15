#include <unistd.h>
//#include <stdio.h>
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

unsigned int	get_value(char str, char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i] != str)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	len;
	int				sign;

	i = 0;
	sign = 1;
	len = length(base);
	if (len > 1 && !check_dupli_simbols(base))
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		while (*str)
		{
			i = i * len + get_value(*str, base);
			str++;
		}
		if ((sign == -1 && i > 2147483648) || (sign == 1 && i > 2147483647))
			return (0);
	}
	return (i * sign);
}

//int main(){
//	char *str = "7FFFFFFF";
//	char *dec = "0123456789";
//	char *bin = "01";
//	char *hex = "0123456789ABCDEF";
//	char *custom = "poniguay";
//
//	int i = ft_atoi_base(str, hex);
//
//	printf("%d", i);
//}
