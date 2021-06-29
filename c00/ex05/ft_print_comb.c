#include <unistd.h>

void	ft_displaynumber(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{	
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	g;
	char	h;
	char	i;

	g = '0';
	h = '1';
	i = '2';
	while (g <= '7' )
	{
		h = g + 1;
		while (h <= '8' )
		{
			i = h + 1;
			while (i <= '9')
			{
				ft_displaynumber(g, h, i);
				i++;
			}
			h++;
		}
		g++;
	}
}
