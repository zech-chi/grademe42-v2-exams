/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:36:20 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 00:48:02 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	l;
	unsigned int	r;

	l = 0;
	while (l < size - 1)
	{
		r = l + 1;
		while (r < size)
		{
			if (tab[r] < tab[l])
				ft_swap(tab + l, tab + r);
			r++;
		}
		l++;
	}
}

//#include <stdio.h>
//#include <stdlib.h>

//int	main(int ac, char **av)
//{
//	if (ac == 1)
//		return (0);
//	int	tab[ac - 1];
//	// fill tab
//	for (int i = 0; i < ac - 1; i++)
//		tab[i] = atoi(av[i + 1]);
//	// print arr before sorting it
//	printf("before sort:\n");
//	printf("[");
//	for (int i = 0; i < ac - 1; i++)
//	{
//		if (i != 0)
//			printf(", ");
//		printf("%d", tab[i]);
//	}
//	printf("]\n");

//	// sort arr
//	sort_int_tab(tab, ac - 1);

//	// print arr after sorting it
//	printf("after sort:\n");
//	printf("[");
//	for (int i = 0; i < ac - 1; i++)
//	{
//		if (i != 0)
//			printf(", ");
//		printf("%d", tab[i]);
//	}
//	printf("]\n");
//}
