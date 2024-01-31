/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:23:25 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 17:23:26 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	shifted_left;
	unsigned char	shifted_right;

	shifted_left = octet << 4;
	shifted_right = octet >> 4;
	return (shifted_left | shifted_right);
}
