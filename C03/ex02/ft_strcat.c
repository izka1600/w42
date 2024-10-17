#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "Hello ";
	char	src[] = "Sunshine!";
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
