#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2 ))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
void	printarr(int arr[], int size)
{
	for(int i = 0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size;
	
	size = 5;
	ft_rev_int_tab(tab, size);
	
	printarr(tab, size);

}
*/
