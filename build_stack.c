/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 15:59:56 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-24 15:59:56 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// create a new node

t_sort_list	*new_node(int nb)
{
	t_sort_list	*node;

	node = malloc(sizeof (t_sort_list));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = NULL;
	return (node);
}

// find last node

t_sort_list	*stack_last(t_sort_list *lst)
{
	t_sort_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

// add a node at the back of the list

void	stack_add_back(t_sort_list **lst, t_sort_list *new)
{
	t_sort_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = stack_last(*lst);
	last->next = new;
}

// free all the nodes of the list

void	free_lst(t_sort_list *lst)
{
	t_sort_list	*temp;

	while (lst != NULL)
	{
		temp = (lst)->next;
		free(lst);
		lst = temp;
	}
}

#include <stdio.h>

// fill the stack with args while freeing them

t_sort_list *build_stack(char **argv)
{
	t_sort_list	*stack;
	t_sort_list	*node;
	int	i;

	stack = NULL;
	i = 0;
	while (argv[i] != NULL)
	{
		node = new_node(ft_atoi(argv[i]));
		if (!node)
		{
			free_lst(stack);
			ft_free_mtr(argv, i);
			exit (1);
		}
		stack_add_back(&stack, node);
		free(argv[i]);
		i++;
	}
	free(argv);
	return (stack);
}
