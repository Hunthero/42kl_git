#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a' || (str[c] > 'z')))
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

	str_true = "abcd";
	str_false = "123ABCD";
	printf("print 1: %d\n", ft_str_is_lowercase(str_true));
	printf("print 0: %d\n", ft_str_is_lowercase(str_false));	
}
*/
