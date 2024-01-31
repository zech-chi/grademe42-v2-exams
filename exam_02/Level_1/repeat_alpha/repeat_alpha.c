/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 04:45:25 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 04:49:31 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char c, char first_alpha)
{
	int	n;

	n = c - first_alpha + 1;
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
			ft_repeat_alpha(av[1][i], 'a');
		else if ('A' <= av[1][i] && av[1][i] <= 'Z')
			ft_repeat_alpha(av[1][i], 'A');
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}