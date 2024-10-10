#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i_temp;

	i_temp = *a;
	*a = *b;
	*b = i_temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 48;
	printf("%i\n", a);
	printf("%i\n", b);
	ft_swap(&a, &b);
	printf("%i\n", a);
	printf("%i\n", b);
	return (0);
}
