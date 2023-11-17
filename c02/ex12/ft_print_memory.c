#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	hex_to_int(int hex)
{
	char *str = "0123456789abcdef";

	if (hex < 16)
		write(1, &str[hex], 1);
	else
	{
		hex_to_int(hex / 16);
		hex_to_int(hex % 16);
	}
}

void	atoh(char *str)
{
	printf("\n--%s--\n", str);
	while(*str++)
	{
		hex_to_int(*str);
		write(1, " ", 1);
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
//	int	i;
	char	*str = (char *) addr;	
	
	printf("-%s-\n", str);
	printf("(%p / %ld)\n", str, strlen(str));
	
//	i = 1;
	while (size--)
	{
//		write(1, "00000000", 8);
//		printf("\n--%p\n%s\n", str, str);
		atoh(&*str);
		str++;
//		hex_to_char(&addr);
//		i++;
//		while (i++ % 16)
//		{
//			print_char(addr++);
//		}
//		print_content(addr-16);

	}
}

int	main(){
	char test[] = "lol l";
	char *str;

	str = &*test;


	ft_print_memory(str, 6);
	printf("\n%p\n", &test);
//	printf("\n%s\n", &*str);
}
