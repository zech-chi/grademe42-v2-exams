/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:18:10 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 02:18:11 by zech-chi         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	l;
	int	r;
	int	i;
	int	printed_chars;

	if (ac == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	l = 0;
	while (ft_isSpace(av[1][l]))
		l++;
	r = l;
	while (av[1][r] && !ft_isSpace(av[1][r]))
		r++;
	i = r - 1;
	printed_chars = 0;
	while (av[1][++i])
	{
		if (!ft_isSpace(av[1][i]))
		{
			if (ft_isSpace(av[1][i - 1]) && printed_chars > 0)
				ft_putchar(' ');
			ft_putchar(av[1][i]);
			printed_chars++;
		}
	}
	if (av[1][l] && printed_chars > 0)
		ft_putchar(' ');
	while (l < r)
		ft_putchar(av[1][l++]);
	ft_putchar('\n');
	return (0);
}
