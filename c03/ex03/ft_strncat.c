//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && nb--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
//int main(){
//	char dest1[20] = "hola", dest2[20] = "hola";
//	char src[10] = " adios.";
//
//	printf("dest: \"%s\"\nsrc: \"%s\"\n", dest1, src);
//	printf("Concatenating\n");
//	strncat(dest2, src, 4);
//	ft_strncat(dest1, src, 4);
//	printf("result con ft:      \"%s\"\n", dest1);
//	printf("result con strncat: \"%s\"\n", dest2);
//
//}
