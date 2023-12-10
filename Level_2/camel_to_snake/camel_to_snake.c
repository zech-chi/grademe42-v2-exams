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
		if ('A' <= av[1][i] && av[1][i] <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(av[1][i] + 32);
		}
		else
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}