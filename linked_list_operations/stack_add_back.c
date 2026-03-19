/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:43:41 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:43:41 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
