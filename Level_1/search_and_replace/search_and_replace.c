#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 4 || ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] == av[2][0])
			ft_putchar(av[3][0]);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}