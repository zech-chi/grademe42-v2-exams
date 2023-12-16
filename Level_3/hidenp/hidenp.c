/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 04:12:38 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 04:19:45 by zech-chi         ###   ########.fr       */
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
	int	j;

	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	j = 0;
	while (av[1][i] && av[2][j])
	{
		if (av[1][i] == av[2][j])
			i++;
		j++;
	}
	if (!av[1][i])
		ft_putchar('1');
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
