/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:46:22 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 03:10:13 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isPrime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_get_next_prime(int p)
{
	int next_p;

	next_p = p + 1;
	while (!ft_isPrime(next_p))
		next_p++;
	return (next_p);
}

void	fprime(int n)
{
	int	p;
	int	is_first_factor;

	is_first_factor = 1;
	p = 2;
	while (n > 1)
	{
		if (n % p == 0)
		{
			if (!is_first_factor)
				printf("*");
			printf("%d", p);
			n /= p;
			is_first_factor = 0;
		}
		else
			p = ft_get_next_prime(p);
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	if (ac != 2 || atoi(av[1]) <= 0)
		printf("\n");
	else if (atoi(av[1]) == 1)
		printf("1\n");
	else
		fprime(atoi(av[1]));
	return (0);
}