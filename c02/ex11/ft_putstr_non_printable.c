#include <unistd.h>

void	int_to_hex(int i)
{
	char	hex;
	int		tmp;

	tmp = i % 16;
	if (tmp < 10)
		tmp += '0';
	else
		tmp += 87;
	hex = tmp;
	i /= 16;
	if (i != 0)
		int_to_hex(i);
	write (1, &hex, 1);
}

void	print_non_printable(char *c)
{
	int	i;

	i = (int) *c;
	write(1, "\\", 1);
	if (i < 16)
		write(1, "0", 1);
	int_to_hex(i);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
			print_non_printable(&*str);
		else
			write(1, &*str, 1);
		str++;
	}
}
//int main(){
//	char str[] = "Xhola\v123.\n";
//	str[0] = 31;
//
//
//	ft_putstr_non_printable(str);
//
//}
