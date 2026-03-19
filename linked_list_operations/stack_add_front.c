/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 16:57:11 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 16:57:11 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_front(t_sort_list **lst, t_sort_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
