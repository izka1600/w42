#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("I want to divide %i by %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("And after division it looks like this %i %i \n", a, b);
	return (0);
}
