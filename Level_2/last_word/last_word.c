/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 04:10:28 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 04:10:29 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	int	r;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	r = ft_strlen(av[1]) - 1;
	while (r >= 0 && (av[1][r] == ' ' || av[1][r] == '\t'))
		r--;
	while (r >= 0 && av[1][r] != ' ' && av[1][r] != '\t')
		r--;
	while (av[1][++r] && av[1][r] != ' ' && av[1][r] != '\t')
		ft_putchar(av[1][r]);
	ft_putchar('\n');
	return (0);
}
