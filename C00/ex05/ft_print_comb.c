#include <unistd.h>

void	ft_print_comb(void)
{
	char	number;
	char	number2;
	char	number3;
	char	i;

	number = '0';
	while (number <= '7')
	{
		number2 = number + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write(1, &number, 1) + write(1, &number2, 1) + write(1, &number3, 1) + write(1, " ", 1);
				number3++;
			}
			number2++;
		}
		number++;
	}
}

int	main(void)
{
ft_print_comb();
	return (0);
}
