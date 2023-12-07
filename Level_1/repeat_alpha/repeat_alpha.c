#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char c)
{
	int	n;

	n = c - 'a' + 1;
	while (n)
	{
		ft_putchar(c);
		n--;
	}
}

int main(int ac, char **av)
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
			ft_repeat_alpha(av[1][i]);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}