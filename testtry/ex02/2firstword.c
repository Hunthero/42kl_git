#include <unistd.h>

void	firstword(char *str)
{
	while (*str == ' ' || *str == '\t')
	{
		++str;
	}
	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		firstword(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
