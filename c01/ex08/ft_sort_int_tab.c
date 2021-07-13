#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[a] > tab [b])
			{
				temp = tab[a];
				tab [a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
	}
}
/*
#include <stdio.h>

void	printarr(int arr[], int size)
{

	for (int i = 0; i< (size -1); i++)
		printf("%d\n", arr[i]);
		printf("%d\n", arr[size-1]);
		
}

int main()
{
	int tab[] = {1, 52, 33, 24, 35, 54, 3};
	int size;
	size = 7;


	ft_sort_int_tab(tab, size);
	
	printarr(tab, size);

}
*/
