/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:57:35 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:57:36 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	maximus;

	if (len == 0)
		return (0);
	maximus = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > maximus)
			maximus = tab[i];
		i++;
	}
	return (maximus);
}
