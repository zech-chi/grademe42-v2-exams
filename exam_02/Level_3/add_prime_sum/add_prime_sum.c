/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 02:00:09 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 02:14:45 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_atoi(char *str)
{
	int	res = 0;
	int	signe = 1;
	int i = 0;

	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (signe * res);
}

int	ft_isPrime(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	sum = 0;
	int i = 2;
	int n;

	if (ac != 2 || ft_atoi(av[1]) < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	n = ft_atoi(av[1]);
	while (i <= n)
	{
		if (ft_isPrime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
