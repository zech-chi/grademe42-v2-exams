/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:02:42 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:02:43 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_nbrlen(int nbr)
{
	int	len;

	if (nbr == -2147483648)
		return (11);
	if (nbr == 0)
		return (1);
	len = 1 * (nbr < 0);
	if (nbr < 0)
		nbr *= -1;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	len;

	len = ft_nbrlen(nbr);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (nbr == 0)
		return (res[0] = '0', res[1] = '\0', res);
	if (nbr == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		nbr = 147483648;
	}
	else if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	res[len--] = '\0';
	while (nbr)
	{
		res[len--] = '0' + nbr % 10;
		nbr /= 10;
	}
	return (res);
}
