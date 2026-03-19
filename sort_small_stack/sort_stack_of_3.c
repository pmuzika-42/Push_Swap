/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_of_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:08:25 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:08:25 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_of_3(t_sort_list **lst)
{
	if (stack_is_sorted(*lst))
		return ;
	if ((*lst)->nb == get_nb_min(*lst))
	{
		rra(lst);
		sa(lst);
	}
	else if ((*lst)->next->nb == get_nb_min(*lst))
	{
		if ((*lst)->nb == get_nb_max(*lst))
			ra(lst);
		else
			sa(lst);
	}
	else
	{
		if ((*lst)->nb == get_nb_max(*lst))
		{
			sa(lst);
			rra(lst);
		}
		else
			rra(lst);
	}
}
