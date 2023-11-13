//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
//int main(){
//	char *str = "8\339";
//	int result_ft = ft_str_is_printable(str);
//
//	printf("result con ft:  %d\n%s", result_ft, str);
//
//}
