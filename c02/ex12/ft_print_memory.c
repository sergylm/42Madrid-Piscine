#include <unistd.h>
#include <stdio.h>
#include <string.h>


void	hex_to_char(void *addr)
{
//	char 	*base;
	int	zeros;
	char	*str = (char *) addr;
;

//	base = "0123456789abcdef";
//	*str = 	
	printf("\n%s----", str);
	while (*str)
	{
		str++;
		zeros++;
	}
	addr -= zeros;
//	write(1, "0000000000000000", zeros);
//	write(1, "\n", 1);
//	write (1, &addr,16 - zeros);
}

void	print(void *str)
{
	write(1, &str, 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
//	int 	i;
	char *str = (char *) &addr;
	
	printf("\n(%ld)", strlen(str));
	
//	i = 1;
	while (size--)
	{
		write(1, "00000000", 8);
		printf("\n--%p\n%s\n", str, str);
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
	char str[] = "lol l";


	ft_print_memory(&str, 6);
//	printf("\n%p\n", &str);
//	printf("\n%s\n", &*str);
}
