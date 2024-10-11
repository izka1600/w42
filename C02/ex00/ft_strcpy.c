#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "Hello world";
	char	destination[50];

	printf("Source is %s, and destination is %s\n", source, destination);
	ft_strcpy(destination, source);
	printf("Source is %s, and destination is %s\n", source, destination);
	return (0);
}
