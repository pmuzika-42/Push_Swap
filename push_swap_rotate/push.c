/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-18 11:04:42 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-18 11:04:42 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_sort_list **dst, t_sort_list **src)
{
	t_sort_list	*tmp;

	if (!(*src))
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = NULL;
	if (!(*dst))
		*dst = tmp;
	else
		stack_add_front(dst, tmp);
}
