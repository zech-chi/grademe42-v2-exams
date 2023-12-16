/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:56:09 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:56:10 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if ('a' <= av[1][i] && av[1][i] <= 'z')
			ft_putchar('z' - (av[1][i] - 'a'));
		else if ('A' <= av[1][i] && av[1][i] <= 'Z')
			ft_putchar('Z' - (av[1][i] - 'A'));
		else
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}