/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:00:50 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:00:51 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	max(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	m;

	if (a == 0 || b == 0)
		return (0);
	m = max(a, b);
	while (m % a != 0 || m % b != 0)
		m++;
	return (m);
}
