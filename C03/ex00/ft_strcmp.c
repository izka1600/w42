#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
/*I check till the moment when one of the strings has '\0' 
then I brak loop and just return s1[i] - s2[i]*/
	char	*s1;
	char	*s2;

	s1 = "Test";
	s2 = "Test";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
