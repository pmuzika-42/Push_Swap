/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 10:47:27 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 10:47:27 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(t_sort_list **stack_a, int argc)
{
	t_sort_list	*stack_b;

	stack_b = NULL;
	if (argc == 2)
		sa(stack_a);
	if (argc == 3)
		sort_stack_of_3(stack_a);
	if (argc == 4)
		sort_stack_of_4(stack_a, &stack_b);
	if (argc == 5)
		sort_stack_of_5(stack_a, &stack_b);
}
