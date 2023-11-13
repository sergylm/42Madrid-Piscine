//#include <stdio.h>
//#include <bsd/string.h>
int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = length(src);
	while (--size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
//int main(){
//	char dest1[] = "test1", dest2[] = "test1", src[] = "1111111";
//	int result_ft, result_strlcpy;
//	unsigned int len = length(dest1);
//	unsigned int len2 = strlen(dest2);
//
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", dest1, src);
//	result_ft = ft_strlcpy(dest1, src, len + 1);
//	result_strlcpy = strlcpy(dest2, src, len2 + 1);
//	printf("resul con ft_strncpy return: \"");
//	printf("%i\"  string: \"%s\"\n", result_ft, dest1);
//	printf("resul con strlcpy    return: \"");
//	printf("%i\"  string: \"%s\"\n", result_strlcpy, dest2);
//}
