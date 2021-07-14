#include <unistd.h>
int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A' || (str[c] > 'Z')))
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

	str_true = "ABCD";
	str_false = "abcd123";
	printf("print 1: %d\n", ft_str_is_uppercase(str_true));
	printf("print 0: %d\n", ft_str_is_uppercase(str_false));	
}
*/
