/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 16:14:34 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-17 16:14:34 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_sort_list *lst)
{
	t_sort_list	*comp;

	while (lst != NULL && lst->next != NULL)
	{
		comp = lst->next;
		if (lst->nb > comp->nb)
			return (0);
		lst = lst->next;
	}
	return (1);
}
