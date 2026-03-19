/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_of_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:09:22 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:09:22 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_of_4(t_sort_list **stack_a, t_sort_list **stack_b)
{
	int	nb_min;

	nb_min = get_nb_min(*stack_a);
	if ((*stack_a)->next->nb == nb_min)
		sa(stack_a);
	else
	{
		while ((*stack_a)->nb != nb_min)
			rra(stack_a);
	}
	if (stack_is_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_stack_of_3(stack_a);
	pa(stack_a, stack_b);
}
