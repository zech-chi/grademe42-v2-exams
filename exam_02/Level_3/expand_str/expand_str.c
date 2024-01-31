/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:28:17 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 22:36:29 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	int	i;
	int	is_first_word;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = -1;
	is_first_word = 1;
	while (av[1][++i])
	{
		if (!ft_is_space(av[1][i]))
		{
			if (is_first_word)
				is_first_word = 0;
			else if (ft_is_space(av[1][i - 1]))
				write(1, "   ", 3);
			write(1, av[1] + i, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
