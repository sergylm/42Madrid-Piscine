//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * sign);
}
//int main(){
//	char *str = "   ---+--+1234ab567";
//	char *str1 = "-2147483648";
//	
//	printf("%d\n%d", ft_atoi(str), ft_atoi(str1));
//}
