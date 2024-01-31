/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:57:54 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:57:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char 	rev_bits(unsigned char octet)
{
	int	i;
	unsigned char	rev;

	i = -1;
	rev = 0;
	while (++i < 8)
	{
		rev <<= 1;
		if (octet & (1 << i))
			rev += 1;
	}
	return (rev);
}
