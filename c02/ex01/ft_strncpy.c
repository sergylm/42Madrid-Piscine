//#include <stdio.h>
//#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i] != '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
//int main(){
//	char dest1[] = "test1", dest2[] = "test1", src[] = "1234567890";
//	char *result_ft, *result_strncpy;
//	unsigned int len = strlen(dest1);
//
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", dest1, src);
//	result_ft = ft_strncpy(dest1, src, len);
//	result_strncpy = strncpy(dest2, src, len);
//	printf("resul con ft_strncpy: \"%s\"\n", result_ft);
//	printf("resul con strncpy:    \"%s\"\n", result_strncpy);
//}
