#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
	int	i;

	i = ft_strlen("Hello w");
	printf("%i", i);
	return (0);
}
