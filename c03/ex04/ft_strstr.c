//#include <stdio.h>
//#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*result;
	char	*aux;

	result = str;
	aux = to_find;
	while (*str)
	{
		if (*str == *aux)
		{
			result = &*str;
			while (*str == *aux && *aux)
			{
				str++;
				aux++;
			}
			if (!*aux)
				return (&*result);
			str = &*result;
			aux = &*to_find;
		}
		str++;
	}
	return (NULL);
}
//int main(){
//	char str[20] = "holaadios";
//	char to_find[10] = "adios";
//	char *result_ft, *result_strstr;
//	
//	result_ft = ft_strstr(str, to_find);
//	result_strstr = strstr(str, to_find);
//	printf("result con ft:     \"%s\"\n", result_ft);
//	printf("result con strstr: \"%s\"\n", result_strstr);
//
//}
