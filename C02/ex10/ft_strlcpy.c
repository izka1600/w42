#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{
	char	destination[50];
	char*	source;
	unsigned int	result;

	// size of destination is enough to copy source to it
	source = "Hello Iza";
	result = ft_strlcpy(destination, source, sizeof(destination));
	printf ("Src: %s, dest: %s, src length: %d\n", source, destination, result);
	// size < source's length
        destination[0] = '\0';
        result = ft_strlcpy(destination, source, 5);
        printf ("size < source's length. Src: %s, dest: %s, src length: %d\n",
			source, destination, result);
	// size == 0
        destination[0] = '\0';
        result = ft_strlcpy(destination, source, 0);
        printf ("size == 0. Src: %s, dest: %s, src length: %d\n",
			source, destination, result);
        // src = ""
	source = "";
        destination[0] = '\0';
        result = ft_strlcpy(destination, source, 0);
        printf ("src = "". Src: %s, dest: %s, src length: %d\n",
			source, destination, result);
        // size == 1 so only \0 is copied
        source = "";
        destination[0] = '\0';
        result = ft_strlcpy(destination, source, 0);
        printf ("size == 1. Src: %s, dest: %s, src length: %d\n",
			source, destination, result);
	return (0);
}*/
