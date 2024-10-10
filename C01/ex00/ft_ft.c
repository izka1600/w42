#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	intiger;

	intiger = 38;
	printf("%i\n", intiger);
	ft_ft(&intiger);
	printf("%i\n", intiger);
	return ('0');
}
