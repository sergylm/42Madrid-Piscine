//#include <stdio.h>
void	lowercase(int i, int j, char *str)
{
	if (i == 0 || j < '0')
		str[i] -= 32;
	else if ((j > '9' && j < 'A') || (j > 'Z' && j < 'a'))
		str[i] -= 32;
}

void	uppercase(int i, int j, char *str)
{
	if ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'))
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = str[i - 1];
		if (str[i] >= 'a' && str[i] <= 'z')
			lowercase(i, j, str);
		else if ((str[i] >= 'A' && str[i] <= 'Z') && i != 0)
			uppercase(i, j, str);
		i++;
	}
	return (str);
}
//int main(){
//	char str[] = "SaLUt, cOmment TU vas ? 42mots quaRAnte-aux; cinQUante+et+un";
//
//	printf("result: %s\n", str);
//	ft_strcapitalize(str);
//	printf("result: %s\n", str);
//}
