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
	i = -1;
	while (av[1][++i])
	{
		if (i > 0 && av[1][i - 1] == '_')
			ft_putchar(av[1][i] - 32);
		else if (av[1][i] != '_')
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}