#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_len_strs(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i++])
			len++;
		j++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	len;
	int	i;
	int	j;
	int	k;
	if (size <= 0 || strs == 0)
		return ("");
	len = ft_len_strs(size, strs);
	result = malloc (len + size + 1); 
	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			result[k++] = strs[j][i++];
		j++;
		if (j < size)
			result[k++] = *sep;
	}
	result[k] = 0;
	return (result);
	

}

int	main()
{
	char *strs[] = {
		"Hola",
		"Mundo",
		"en",
		"C"
	};
	char *result;
	
	for(int i = 0; i < 4; i++)
		printf("%s\n", strs[i]);

	result = ft_strjoin(4, strs, ":");
	printf("%s -> %ld\n", result, strlen(result));
}
