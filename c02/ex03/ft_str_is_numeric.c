#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0' || (str[c] > '9')))
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

	str_true = "1234";
	str_false = "123ABC";
	printf("print 1: %d\n", ft_str_is_numeric(str_true));
	printf("print 0: %d\n", ft_str_is_numeric(str_false));	
}
*/
