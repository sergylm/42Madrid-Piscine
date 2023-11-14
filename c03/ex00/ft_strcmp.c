//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//int main(){
//	char str1[] = "ay9", str2[] = "ayu";
//	int result_ft, result_strcmp;
//
//	result_ft = ft_strcmp(str1, str2);
//	result_strcmp = strcmp(str1, str2);
//
//	printf("resul con ft:     %d\n", result_ft);
//	printf("resul con strcmp: %d\n", result_strcmp);
//}
