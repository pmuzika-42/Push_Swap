/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-18 10:39:23 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-18 10:39:23 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_sort_list **lst)
{
	t_sort_list	*tmp;

	if ((*lst)->next == NULL)
		return ;
	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next = (*lst);
	*lst = tmp;
}
