/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_equal_nb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:01:29 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:01:29 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// assign order equal to nb

void	order_equal_nb(t_sort_list **lst)
{
	while (*lst != NULL)
	{
		(*lst)->order = (*lst)->nb;
		*lst = (*lst)->next;
	}
}
