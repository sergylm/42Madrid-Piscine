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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = length(dest);
	j = length(src);
	result = i + j;
	j = 0;
	while (src[j] && size-- - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (result);
}
//int main(){
//	char dest1[10] = "hola", dest2[10] = "hola";
//	char src[10] = " adios";
//	unsigned int result_ft, result_strlcat;
//
//	printf("dest: \"%s\"\tsrc: \"%s\"\n", dest1, src);
//	printf("Concatenating\n");
//	result_ft = ft_strlcat(dest1, src, sizeof(dest1));
//	result_strlcat = strlcat(dest2, src, sizeof(dest2));
//	printf("result con ft:      %d\t", result_ft);
//	printf("dest1: \"%s\"\n",dest1);
//	printf("result con strlcat: %d\t", result_strlcat);
//	printf("dest2: \"%s\"\n", dest2);
//}
