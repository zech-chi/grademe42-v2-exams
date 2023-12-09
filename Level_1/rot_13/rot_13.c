#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if ('a' <= av[1][i] && av[1][i] <= 'z')
			ft_putchar((av[1][i] - 'a' + 13) % 26 + 'a');
		else if ('A' <= av[1][i] && av[1][i] <= 'Z')
			ft_putchar((av[1][i] - 'A' + 13) % 26 + 'A');
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
