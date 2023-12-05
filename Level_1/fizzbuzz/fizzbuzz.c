#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;	
	}
}

int main()
{
	int i;

	i = 0;
	while (++i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
		{
			if (i < 10)
				ft_putchar(i + '0');
			else
			{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}