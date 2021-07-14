#include <unistd.h>
int	ft_helper(char c)
{
	char	a;
	int		i;	

	a = 0;
	i = 0;
	while (i > 0 && (str[a] >= '0' || str[a] > '9'))
	{
		c++;
	}	
	while (i > 0 && (str[a] < 'a' || str[a] > 'z'))
	{				
		c++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if ((i == 0 && str[c] >= 'a') && (str[c] <= 'z'))
			str[c] = str[c] - 32;
		c++;
		while (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
		{		
			str[c] = str[c] + 32;
			c++;
		}	
		ft_helper(c);
	}	
	i++;
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
