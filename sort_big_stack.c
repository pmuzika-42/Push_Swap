/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:26:02 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:26:02 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_sort_list **stack_a, int argc)
{
	t_sort_list	*stack_b;

	stack_b = NULL;
	assign_order_to_lst(stack_a, argc);
}
