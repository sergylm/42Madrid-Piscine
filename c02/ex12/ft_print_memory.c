#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ctoi(int value)
{
	char c;
	if(value < 16)
	{
		write(1, "0", 1);
		if (value < 10)
			c = '0' + value;
		else
			c = 'a' + (value % 10);
		write(1, &c, 1);
	}
	else
	{
		if (value / 16 < 10)
			c = '0' + value / 16;
		else
			c = 'a' + value / 16 % 10;
		write(1, &c, 1);
		if (value % 16 < 10)
			c = '0' + value % 16;
		else
			c = 'a' + value % 16 % 10;
		write(1, &c, 1);
	}
}

void	print_ascii(void *addr, unsigned int size)
{
	unsigned int i;
	char *c;

	i = 0;
	c = addr;
	while (i++ < size && i <= 16)
	{
		c = addr++;
		if (c[0] > 31 && c[0] < 127)
			write(1, c, 1);
		else
			write(1, ".", 1);
	}
}

void	print_hex(char *addr, unsigned int size)
{
	unsigned int i;
	char *c;

	c = addr;
	i = 0;
	while (i < size && i <= 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		ctoi(c[i]);
		i++;
	}
	while (16 - i != 0)
	{
		write(1, "  ", 2);
		if (i % 2 == 0)
			write(1, " ", 1);
		i++;
	}
}
void	print_addr(char *str)
{
	int	i = 0;
//	char	c[8];
	int ptr;	
	char c;

//	c = *str;
//	write(1, &str, 8);
//	printf("%s", &str);
//	printf("\n--%s--%p\n",(char *) str, str);
	ptr = (int) &str;
	a = (int *) str;
	while (i < 7){
		c = a[i++];
		write(1, &c, 1);
	}
}
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	write (1, &addr, 8);
	write (1, "\n", 1);
	
	while (i < size)
	{
		print_addr(addr);
//		write(1,"       Address", 12);
		write(1, ":", 1);
		print_hex(addr, size - i);
		write(1, " ", 1);
		print_ascii(addr, size - i);
		write(1, "\n", 1);
		i += 16;
		addr += 16;

	}
	return (addr);
}

int	main(){
	char str[] = "Bonjour les aminches\t\t\tc. est fou. tout.ce qu onpeut faire avec";
	char aux[] = "Sal por favor";

	ft_print_memory(&aux, sizeof(aux));
	printf("\n%p\n", &aux);
}
