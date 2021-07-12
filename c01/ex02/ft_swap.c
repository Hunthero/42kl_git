#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 45;
	b = 69;
	printf("check %d\n", a);
	printf("check %d\n", b);
	ft_swap(&a, &b);
	printf("check %d\n", a);
	printf("check %d\n", b);
	return (0);
}
*/
