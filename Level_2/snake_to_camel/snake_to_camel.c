/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:58:00 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:58:02 by zech-chi         ###   ########.fr       */
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
		if (i > 0 && av[1][i - 1] == '_')
			ft_putchar(av[1][i] - 32);
		else if (av[1][i] != '_')
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}
