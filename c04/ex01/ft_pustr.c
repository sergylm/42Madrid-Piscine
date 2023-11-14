#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}
//int main(){
//	char *str = "ayuda";
//
//	ft_putstr(str);
//}
