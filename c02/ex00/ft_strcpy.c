//#include <stdio.h>
//#include <string.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//int main(){
//	char dest1[] = "1234567890", dest2[] = "1234567890";
//	char  src[] = "0987654321aaa", *result_ft, *result_strcpy;
//
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", dest1, src);
//	result_ft = ft_strcpy(dest1, src);
//	printf("resul con ft_strcpy: \"%s\"\n", result_ft);
//	result_strcpy = strcpy(dest2, src);
//	printf("resul con strcpy:    \"%s\"\n", result_strcpy);
//}
