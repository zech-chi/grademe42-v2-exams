/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 02:22:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 02:38:28 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isSpace(char c)
{
	return (c == ' ' || c == '\t');
}

int	ft_isLower(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isUpper(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	main(int ac, char **av)
{
	int r;
	int	c;

	if (ac == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	r = 1;
	while (r < ac)
	{
		c = 0;
		while (av[r][c])
		{
			if (ft_isLower(av[r][c]))
			{
				if (c == 0 || ft_isSpace(av[r][c - 1]))
					ft_putchar(av[r][c] - 32);
				else
					ft_putchar(av[r][c]);
			}
			else if (ft_isUpper(av[r][c]))
			{
				if (c == 0 || ft_isSpace(av[r][c - 1]))
					ft_putchar(av[r][c]);
				else
					ft_putchar(av[r][c] + 32);
			}
			else
				ft_putchar(av[r][c]);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
	return (0);
}
