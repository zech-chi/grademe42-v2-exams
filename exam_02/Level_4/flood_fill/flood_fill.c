/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:33:10 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 01:40:02 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point begin, char color_to_fill)
{
	int	directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
	t_point	next_begin;
	int	nx;
	int	ny;
	tab[begin.y][begin.x] = 'F';
	for (int r = 0; r < 4; r++)
	{
		nx = begin.x + directions[r][0];
		ny = begin.y + directions[r][1];
		if ((0 <= nx && nx < size.x) && (0 <= ny && ny < size.y) && tab[ny][nx] == color_to_fill)
		{
			next_begin.x = nx;
			next_begin.y = ny;
			fill(tab, size, next_begin, color_to_fill);
		}
	}
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	color_to_fill;

	color_to_fill = tab[begin.y][begin.x];
	fill(tab, size, begin, color_to_fill);
}
