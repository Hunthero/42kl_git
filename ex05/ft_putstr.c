#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	string;

	string = 0;
	while (str[string] != '\0')
	{
		ft_putchar(str[string]);
		string++;
	}
}
/*
#include <stdio.h>
   int	main()
{
	char str[] = "Bear in the Woods!";
	char *pointer;
	pointer = str;
	ft_putstr(pointer); 
	return (0);
}
*/
