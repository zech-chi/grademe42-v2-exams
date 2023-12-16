/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:26:23 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:49:09 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int x)
{
	if (x >= 0)
		return (x);
	return (-x);
}

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	size = ft_abs(end - start) + 1;
	res = (int *)malloc(sizeof(int) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (end > start)
			res[i++] = end--;
		else
			res[i++] = end++;
	}
	return (res);
}

//#include <stdio.h>

//int	main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
	
//	int start = atoi(av[1]);
//	int end = atoi(av[2]);
//	int size = ft_abs(end - start) + 1;
//	int *res = ft_rrange(start, end);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", res[i]);
//	}
//	return (0);
//}