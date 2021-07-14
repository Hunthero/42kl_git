#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32 || (str[c] > 126)))
			return (0);
		c++;
	}
	return (1);
}
/*
#include <stdio.h> 
int	main(void)
{
	char *str_true;
	char *str_false;

	str_true = "ABcd1234";
	str_false = "\037";

	printf("print 1: %d\n", ft_str_is_printable(str_true));
	printf("print 0: %d\n", ft_str_is_printable(str_false));	
}
*/
