/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:56:57 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:56:58 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_IsInAccept(const char *accept, char c)
{
	size_t	i;

	i = 0;
	while (accept[i])
	{
		if (accept[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_IsInAccept(accept, s[i]))
		i++;
	return (i);
}
