#include <unistd.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[argc - i], strlen(argv[argc - i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
