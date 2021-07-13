#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <unistd.h>
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 26;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
