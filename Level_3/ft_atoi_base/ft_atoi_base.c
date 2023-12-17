/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:54:08 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 01:35:30 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_search(char c, char *str, int len)
{
	int	i = -1;

	while (++i < len)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	char	lbase[] = "0123456789abcdef";
	char	ubase[] = "0123456789ABCDEF";
	int	res = 0;
	int	signe = 1;
	int	i = 0;
	int l;
	int u;

	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while ((l = ft_search(str[i], lbase, str_base)) > -1 || (u = ft_search(str[i], ubase,str_base)) > -1)
	{
		if (l > -1)
			res = res * str_base + l;
		else
			res = res * str_base + u;
		i++;
	}
	return (signe * res);
}

//#include <stdio.h>
//#include <stdlib.h>

//int	main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
//	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
//	return (0);
//}