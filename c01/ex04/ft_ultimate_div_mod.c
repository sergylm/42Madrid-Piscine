//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}
//int main(){
//	int a = 10, b = 3;
//	
//	printf("a:%d b:%d\n", a, b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("a:%d b:%d", a, b);
//}
