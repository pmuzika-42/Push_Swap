/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:02:25 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:02:25 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialise_order(t_sort_list **lst)
{
	t_sort_list	*tmp;

	tmp = *lst;
	while (tmp != NULL)
	{
		tmp->order = -1;
		tmp = tmp->next;
	}
}
