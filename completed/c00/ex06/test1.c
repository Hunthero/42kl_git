#include <unistd.h>

void	ft_printchar(char c)
{
	write (1, &c, 1);
}

void displaycharacter(char w, char x, char y, char z);
{
	ft_printchar(w);
	ft_printchar(x);
	ft_printchar(' ');
	ft_printchar(y);
	ft_printchar(z);

}

void	ft_print_comb2(void)
{
	char	w;
	char	x;
	char	y;
	char	z;
	w = '0';
	x = '0';
	y = '0';
	z = '0';
	while (w <= '9')
	{	x = w + 1;
		while (x <= '8')
		{	y = x + 1;
			while ( z <= '9')
			{
				z = y + 1;
				ft_printchar(w, x, ' ', y, z)
				z++
			}
		y++
		}
	x++
	}
w++
}

int main (void)
{
	ft_print_comb2();
	return 0;
}
