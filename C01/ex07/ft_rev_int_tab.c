#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 8;
	while (i >= 0)
	{
		printf("%i\n", *(tab + i));
		i--;
	}
}

int	main(void)
{
	int	numbers[];

	numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(numbers, 9);
	return (0);
}
