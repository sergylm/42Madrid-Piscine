//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
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
//	strcat(dest2, src);
//	ft_strcat(dest1, src);
//	printf("result con ft:     \"%s\"\n", dest1);
//	printf("result con strcat: \"%s\"\n", dest2);
//
//}
