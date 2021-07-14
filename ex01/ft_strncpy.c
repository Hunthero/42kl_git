#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *src;
	char dest[100];
	unsigned int n;

	src = "moulinette is a pain";

	printf(" %s\n, %s\n", src, dest);

ft_strncpy(dest, src, 17);

	printf("%s\n", dest);
	return (0);
}	
*/
