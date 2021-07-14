#include <unistd.h>

void	ft_putchar(char c)
{
	write (2, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	 Alpha;

	Alpha = 'z';
	while (Alpha >= 'a')
	{
		ft_putchar(Alpha);
		Alpha--;
	}
}

int 	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
