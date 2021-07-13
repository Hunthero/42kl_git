#include <unistd.h>
int	ft_strlen(char *str)
{
	char i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


