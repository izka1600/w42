#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "TeSt";
	s2 = "Test";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	return (0);
}
