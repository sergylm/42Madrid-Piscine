//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && n--)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//int main(){
//	char str1[] = "ayudaa", str2[] = "ayudba";
//	int result_ft, result_strncmp;
//	unsigned int n = 6;
//
//	result_ft = ft_strncmp(str1, str2, n);
//	result_strncmp = strncmp(str1, str2, n);
//
//	printf("resul con ft:      %d\n", result_ft);
//	printf("resul con strncmp: %d\n", result_strncmp);
//}
