#include <stdio.h>
void swap(int *tab, int i, int j)
{
	int	tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	max;

	j = 0;
	i = 0;
	max = -1;
	min = -1;
	while ( j < size - j - 1)
	{
		i = j;
		while ( i <= size - j - 1)
		{
			printf("\n%d-%d-\n",i ,size - j - 1);
			if (tab[i] < tab[min] || min == -1){
				min = i;
				printf("Index min:%d\n", min);
				printf("Elemnt min:%d\n", tab[min]);
			}
			if (tab[i] > tab[max] || max == -1){
				max = i;
				printf("Index max:%d\n", max);
				printf("Elemnt max:%d\n", tab[max]);
			}
			i++;
		}
		if (j != min){
		printf("cambio mins %d por %d\n", tab[j], tab[min]);
		swap(tab, j, min);}
		if (j != max && size - j - 1 != min && size - j - 1 != max){
			swap(tab, size - j - 1, max);
			printf("cambio maxs %d por %d\n", tab[size - j - 1], tab[max]);
		}
		else{
			if ()
		}
		max = -1;
		min = -1;
		j++;
	}
}
int main(){
	int array[] = {3,1,1,2,4};
	int i = 0, size = (int) (sizeof(array) / sizeof(int));

	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	ft_sort_int_tab(array, size);
	printf("Sorted\n");
	i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
}
