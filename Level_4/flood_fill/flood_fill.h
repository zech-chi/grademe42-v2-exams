/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:35:34 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 18:36:07 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H
typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;
void	flood_fill(char **tab, t_point size, t_point begin);
#endif

