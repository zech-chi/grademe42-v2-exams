/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 04:52:12 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 05:02:07 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (av[2][0] == '+')
		printf("%d\n", a + b);
	else if (av[2][0] == '-')
		printf("%d\n", a - b);
	else if (av[2][0] == '*')
		printf("%d\n", a * b);
	else if (av[2][0] == '/')
		printf("%d\n", a / b);
	else if (av[2][0] == '%')
		printf("%d\n", a % b);
	return (0);
}
