/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:01:29 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:01:30 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_uatoi(char *str)
{
	unsigned int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res);
}

void	ft_print_hex(unsigned int n)
{
	if (n < 16)
		ft_putchar("0123456789abcdef"[n]);
	else
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_print_hex(ft_uatoi(av[1]));
	ft_putchar('\n');
	return (0);
}