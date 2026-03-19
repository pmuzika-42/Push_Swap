/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_last_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 16:57:58 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 16:57:58 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_last_node(t_sort_list **lst)
{
	t_sort_list	*tmp;

	tmp = *lst;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
}
