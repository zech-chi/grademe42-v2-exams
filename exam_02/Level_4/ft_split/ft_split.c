/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:44:05 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 01:29:36 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isSpace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = -1;
	if (!ft_isSpace(str[0]))
	{
		counter++;
		i++;
	}
	while (str[++i])
	{	
		if (!ft_isSpace(str[i]) && ft_isSpace(str[i - 1]))
			counter++;
	}
	return (counter);
}

char	**ft_split(char *str)
{
	char	**res;
	int	r;
	int	c;
	int	left;
	int	right;

	res = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	left = 0;
	r = 0;
	while (str[left])
	{
		while (ft_isSpace(str[left]))
			left++;
		if (!str[left])
			break;
		right = left;
		while (str[right] && !ft_isSpace(str[right]))
			right++;
		res[r] = malloc(sizeof(char) * (right - left + 1));
		if (!(res[r]))
			return (NULL);
		c = 0;
		while (left < right)
			res[r][c++] = str[left++];
		res[r++][c] = '\0';
	}
	return (res[r] = NULL, res);
}
