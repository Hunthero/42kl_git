#include <unistd.h>
char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65) && (str[c] <= 90))
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string[] = "BoDoH MoUlINeTte";
	char	*p_string;
	p_string = string;
	printf("%s\n", ft_strlowcase(p_string));
}
*/
