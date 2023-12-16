/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:10:30 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:20:41 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	res = 0;
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res);
}

void	ft_putnbr(unsigned int u)
{
	if (u < 10)
		ft_putchar('0' + u);
	else
	{
		ft_putnbr(u / 10);
		ft_putnbr(u % 10);
	}
}

int	main(int ac, char **av)
{
	int	n;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	n = ft_atoi(av[1]);
	for (int i = 1; i < 10; i++)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
	}
	return (0);
}
