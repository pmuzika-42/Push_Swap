/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_of_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:10:07 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:10:07 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_of_5(t_sort_list **stack_a, t_sort_list **stack_b)
{
	t_sort_list	*tmp;
	int			i;

	tmp = *stack_a;
	i = 0;
	while (tmp->nb != get_nb_min(*stack_a))
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= 2)
	{
		while ((*stack_a)->nb != get_nb_min(*stack_a))
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->nb != get_nb_min(*stack_a))
			rra(stack_a);
	}
	if (stack_is_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_stack_of_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
