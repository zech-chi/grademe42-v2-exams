/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:58:09 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:58:10 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_search(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = -1;
	while (av[1][++i])
	{
		if (ft_search(av[1], av[1][i]) == i)
			ft_putchar(av[1][i]);
	}
	i = -1;
	while (av[2][++i])
	{
		if (ft_search(av[1], av[2][i]) == -1 && ft_search(av[2], av[2][i]) == i)
			ft_putchar(av[2][i]);
	}
	ft_putchar('\n');
	return (0);
}
