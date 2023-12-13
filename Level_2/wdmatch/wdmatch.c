#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	j = -1;
	while (av[2][++j] && av[1][i])
	{
		if (av[2][j] == av[1][i])
			i++;
	}
	if (!av[1][i])
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}