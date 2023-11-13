//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}
//int main(){
//	char str1[] = "test1", str2[] = "1234567890456789045678904567890", *result;
//
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", str1, str2);
//	result = ft_strcpy(str1, str2);
//	printf("Copiado\n");
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", str1, str2);
//	printf("resul:\"%s\"\n", result);
//}
