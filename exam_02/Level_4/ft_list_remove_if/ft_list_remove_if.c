/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:36:58 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 04:07:22 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;
	t_list	*prev;
	t_list	*to_free;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		to_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(to_free);
	}
	if (!(*begin_list))
		return ;
	prev = *begin_list;
	cur = (*begin_list)->next;
	while (cur)
	{
		while (cur && (*cmp)(cur->data, data_ref) == 0)
		{
			to_free = cur;
			cur = cur->next;
			free(to_free);
		}
		prev->next = cur;
		prev = cur;
		if (cur)
			cur = cur->next;
	}
}

//// for testing
//#include <stdio.h>

//int	ft_areEqual(void	*a, void	*b)
//{
//	int *x = a;
//	int *y = b;
//	return (*x != *y);
//}

//t_list	*ft_createNode(void	*data)
//{
//	t_list	*new_node;

//	if (!data)
//		return (NULL);
//	new_node = (t_list *)malloc(sizeof(t_list));
//	if (!new_node)
//		return (NULL);
//	new_node->data = data;
//	new_node->next = NULL;
//	return (new_node);
//}

//void	ft_addBack(t_list **head, t_list *new_node)
//{
//	t_list	*cur;

//	if (!head || !new_node)
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
//		printf(" %d -->", *(int *)head->data);
//		head = head->next;
//	}
//	printf(" NULL\n\n");
//}

//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (0);
	
//	// create linked list
//	int	data_ref = atoi(av[1]);
//	t_list	*head;
//	for (int i = 2; i < ac; i++)
//	{
//		int *a = malloc(sizeof(int));
//		if (!a)
//			return (0);
//		*a = atoi(av[i]);
//		ft_addBack(&head, ft_createNode(a));
//	}

//	// print list before removing data_ref:
//	printf("before\n");
//	ft_print_list(head);
//	// remove data_ref from list
//	ft_list_remove_if(&head, &data_ref, ft_areEqual);
//	printf("remove: %d\n\n", data_ref);
//	// print list after removing data_ref:
//	printf("after\n");
//	ft_print_list(head);
//	return (0);
//}