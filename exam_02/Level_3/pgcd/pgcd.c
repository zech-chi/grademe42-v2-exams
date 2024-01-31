/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:27:47 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:33:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	pgcd(int a, int b)
{
	int	m;

	m = min(a, b);
	while (a % m != 0 || b % m != 0)
		m--;
	return (m);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
	return (0);
}
