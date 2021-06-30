#include <unistd.h>

void	ft_printchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char		y;
	char		z;

	y = 0;
	z = 1;
	while (y <= 98)
	{	
		z = y + 1;
		while (z <= 99)
		{		
			ft_printchar((y / 10) + '0');
			ft_printchar((y % 10) + '0');
			write (1, " ", 1);
			ft_printchar((z / 10) + '0');
			ft_printchar((z % 10) + '0');
			if (y != 98 || z != 99)
			{
				write(1, ", ", 2);
			}
			z++;
		}
		y++;
	}
}
