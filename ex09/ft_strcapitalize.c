#include <unistd.h>

int	checkalphanum(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{	
 		while (str[i] && checkalphanum(str[i]))
   			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i]);
		i++;
		while (str[i] && !checkalphanum(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = (str[i] + 32);
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
		char str1[] = "abcde, what the fish ? 42forlife what-else; ouch+ouch";
		char str2[] = "aBCdE, whAt tHE FIsH ? 42ForLiFe whAt-ElSe; oUcHh+oUCh";
		char empty[] = "";
	

		printf("\n-----\nBEF = %s", str1);
				
		printf("\nAFT = %s\n", ft_strcapitalize(str1));
					
		printf("\nBEF = %s", str2);
						
		printf("\nAFt = %s\n", ft_strcapitalize(str2));
							
		printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
}
*/
