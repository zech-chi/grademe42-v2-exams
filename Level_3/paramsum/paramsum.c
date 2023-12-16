/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:37:29 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 02:42:26 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putunbr(unsigned int u)
{
	if (u < 10)
		ft_putchar('0' + u);
	else
	{
		ft_putunbr(u / 10);
		ft_putunbr(u % 10);
	}
}

int	main(int ac, char **av)
{
	*av = NULL;
	ft_putunbr(ac - 1);
	ft_putchar('\n');
}
