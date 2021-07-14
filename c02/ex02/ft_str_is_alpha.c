#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}	
	return (1);
}
/*
#include <stdio.h>
int		main(void)

{
	char alpha[] = "MerdEkA";
	char *p_alpha;
	p_alpha = alpha;

	char special[] = "45457]!?@#$&*";
	char *p_special;
	p_special = special;

	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alpha));
	printf("%s = %d\n", special, ft_str_is_alpha(p_special));
	return (0);
}
*/
