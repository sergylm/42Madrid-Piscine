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
//	char dest1[6] = "test1", dest2[6] = "test1", src[20] = "1234567890";
//	int result_ft, result_strlcpy;
//
//	printf("dst:\"%s\"\nsrc:\"%s\"\n", dest1, src);
//	result_ft = ft_strlcpy(dest1, src, sizeof(dest1));
//	result_strlcpy = strlcpy(dest2, src, sizeof(dest2));
//	printf("resul con ft_strncpy return: ");
//	printf("%i  string: \"%s\"\n", result_ft, dest1);
//	printf("resul con strlcpy    return: ");
//	printf("%i  string: \"%s\"\n", result_strlcpy, dest2);
//}
esta mala está función te lo va a tumbar. pregunta si puedes llamar a las funciones ya 
implementadas en C sin usar ls tuyas porque veo que usas legth sin usar un ft 
porque no es tuya y no se si puedes hacer eso 
