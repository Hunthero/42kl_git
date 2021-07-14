#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char *src;
	char dest[18];

	src = "Moulinette Bodoh!";
	printf("%s\n", src);
	printf ("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
*/
