//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
//int main(){
//	int a = 2;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	ft_swap(&a, &b);
//	printf("%d %d", a, b);
//}
