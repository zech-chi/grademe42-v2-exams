/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:56:23 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:56:24 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isSpace(char c)
{
	return (c == ' ' || c == '\n'
		|| c == '\t' || c == '\f'
		|| c == '\v' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int	res;
	int signe;
	int	i;

	res = 0;
	signe = 1;
	i = 0;
	while (ft_isSpace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res * signe);
}
