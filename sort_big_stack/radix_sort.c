/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-20 11:40:57 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-20 11:40:57 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_sort_list **stack_a, t_sort_list **stack_b, int argc)
{
	int	i;
	int	j;
	int	bit_nb;
	int	num;

	i = 0;
	bit_nb = bit_size(argc - 1);
	while (i < bit_nb)
	{
		j = 0;
		while (j < argc)
		{
			num = (*stack_a)->order;
			if (((num >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
		i++;
	}
}
