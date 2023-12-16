/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:42:16 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 23:21:02 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_swap(t_list	*node1, t_list	*node2)
{
	int	tmp;

	tmp = node1->data;
	node1->data = node2->data;
	node2->data = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*left;
	t_list	*right;

	left = lst;
	while (left && left->next)
	{
		right = left->next;
		while (right)
		{
			if (!(cmp(left->data, right->data)))
				ft_swap(left, right);
			right = right->next;
		}
		left = left->next;
	}
	return (lst);
}


//#include <stdio.h>
//#include <stdlib.h>

//int ascending(int a, int b)
//{
//	return (a <= b);
//}

//t_list	*ft_lstnew(int	data)
//{
//	t_list	*new_node;

//	new_node = (t_list *)malloc(sizeof(t_list));
//	if (!new_node)
//		return (NULL);
//	new_node->data = data;
//	new_node->next = NULL;
//	return (new_node);
//}

//void	ft_addback(t_list **head, t_list *new_node)
//{
//	t_list	*cur;

//	if (!new_node || !head)
//		return ;
//	if (!(*head))
//	{
//		*head = new_node;
//		return ;
//	}
//	cur = *head;
//	while (cur->next)
//		cur = cur->next;
//	cur->next = new_node;
//}

//void	ft_print_list(t_list *head)
//{
//	printf("head -->");
//	while (head)
//	{
//		printf(" %d -->", head->data);
//		head = head ->next;
//	}
//	printf(" NULL\n");
//}


//int	main(int ac, char **av)
//{
//	if (ac == 1)
//		return (0);
	
//	t_list	*head;

//	for (int i = 0; i < ac - 1; i++)
//	{
//		ft_addback(&head, ft_lstnew(atoi(av[i + 1])));
//	}
//	ft_print_list(head);
//	head = sort_list(head, ascending);
//	ft_print_list(head);
//	return (0);
//}
