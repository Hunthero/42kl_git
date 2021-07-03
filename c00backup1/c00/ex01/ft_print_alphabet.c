#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	Alpha;

	Alpha = 'a';
	while (Alpha <= 'z')
	{
		ft_putchar(Alpha);
		Alpha++;
	}
}
