#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	print_space;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	print_space = 0;
	while (av[1][i])
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
			print_space = 1;
		else
		{
			if (print_space)
				ft_putchar(' ');
			ft_putchar(av[1][i]);
			print_space = 0;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}