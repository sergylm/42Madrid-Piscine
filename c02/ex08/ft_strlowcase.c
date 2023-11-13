//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
//int main(){
//	char str[] = "AaAbBb";
//
//	printf("result: %s\n", str);
//	ft_strlowcase(str);
//	printf("result: %s\n", str);
//}
