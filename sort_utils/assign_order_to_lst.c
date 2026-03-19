/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_order_to_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:04:07 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:04:07 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_order_to_lst(t_sort_list **lst, int argc)
{
	if (!(has_negative_int(*lst)))
		order_equal_nb(lst);
	else
	{
		initialise_order(lst);
		assign_order_to_int(lst, argc);
	}
}
