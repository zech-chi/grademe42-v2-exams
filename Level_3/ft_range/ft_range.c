/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 05:21:49 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 06:00:06 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int x)
{
	if (x >= 0)
		return (x);
	return (-x);
}

int *ft_range(int start, int end)
{
	int *res;
	int	size;
	int	i;
	
	size = ft_abs((end - start)) + 1;
	res = (int *)malloc(sizeof(int) * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start < end)
			res[i++] = start++;
		else
			res[i++] = start--;
	}
	return (res);
}
