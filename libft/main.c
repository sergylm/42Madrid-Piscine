#include "libft.h"
#include <stdio.h>

int	main()
{
// ft_isalpha
	printf("ft_isalpha:\n");
	printf("\tft_isalpha(2):%i\n", ft_isalpha('2'));
	printf("\tft_isalpha(a):%i\n", ft_isalpha('a'));
// ft_isdigit
	printf("ft_isdigit:\n");
	printf("\tft_isdigit(2):%i\n", ft_isdigit('2'));
	printf("\tft_isdigit(a):%i\n", ft_isdigit('a'));
// ft_isalnum
	printf("ft_isalnum:\n");
	printf("\tft_isalnum(2):%i\n", ft_isalnum('2'));
	printf("\tft_isalnum(a):%i\n", ft_isalnum('a'));
	printf("\tft_isalnum(_):%i\n", ft_isalnum('_'));
// ft_isascii
	printf("ft_isascii:\n");
	printf("\tft_isascii(n):%i\n", ft_isascii('n'));
	printf("\tft_isascii(ñ):%i\n", ft_isascii('ñ'));
}
