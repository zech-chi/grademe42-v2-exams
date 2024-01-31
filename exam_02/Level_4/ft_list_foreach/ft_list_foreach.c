/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:07:49 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/17 03:26:52 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*cur;

	cur = begin_list;
	while (cur)
	{
		(*f)(cur->data);
		cur = cur->next;
	}
}


////for testing ...
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int	ft_isUpper(char c)
//{
//	return ('A' <= c && c <= 'Z');
//}

//void	ft_toLower(void *s)
//{
//	char *str = s;
//	int	i;

//	i = 0;
//	while (str[i])
//	{
//		if (ft_isUpper(str[i]))
//			str[i] += 32;
//		i++;
//	}
//}

//t_list	*ft_createNode(void	*data)
//{
//	t_list	*new_node;

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
//		printf(" %s -->", head->data);
//		head = head->next;
//	}
//	printf(" NULL\n");
//}


//// objectif: data of each node become lowercase
//int	main(int ac, char **av)
//{
//	if (ac == 1)
//		return (0);
	
//	// create linked list
//	t_list	*head;
//	for (int i = 1; i < ac; i++)
//		ft_addBack(&head, ft_createNode(strdup(av[i])));

//	// print linked list before apply change:
//	printf("before:\n");
//	ft_print_list(head);
//	// apply change:
//	ft_list_foreach(head, ft_toLower);
//	// print linked list after apply change:
//	printf("\nafter:\n");
//	ft_print_list(head);
//	return (0);
//}
