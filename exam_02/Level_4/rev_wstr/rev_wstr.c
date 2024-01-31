/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 04:43:01 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 04:43:02 by zech-chi         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	space_index;
	int	printed_words;
	int	i;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	space_index = ft_strlen(av[1]);
	printed_words = 0;
	while (space_index > 0)
	{
		while (space_index > 0 && !ft_isSpace(av[1][space_index]))
			space_index--;
		i = space_index + 1 * (space_index != 0);
		if (printed_words > 0)
			ft_putchar(' ');
		while (av[1][i] && !ft_isSpace(av[1][i]))
			ft_putchar(av[1][i++]);
		printed_words++;
		space_index--;
	}
	ft_putchar('\n');
	return (0);
}