//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while ( i < size / 2)
	{
		tmp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
//int main(){
//	int array[] = {1,2,3,4,5};
//	int i = 0, size = (int) (sizeof(array) / sizeof(int));
//
//	while (i < size)
//	{
//		printf("%d\n", array[i]);
//		i++;
//	}
//	ft_rev_int_tab(array, size);
//	printf("Reversed\n");
//	i = 0;
//	while (i < size)
//	{
//		printf("%d\n", array[i]);
//		i++;
//	}
//}
