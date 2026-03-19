/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 15:59:56 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-24 15:59:56 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fill the stack with args while freeing them

t_sort_list	*build_stack(char **argv)
{
	t_sort_list	*stack;
	t_sort_list	*node;
	int			i;

	stack = NULL;
	i = 0;
	while (argv[i] != NULL)
	{
		node = new_node(ft_atoi(argv[i]));
		if (!node)
		{
			free_lst(&stack);
			ft_free_mtr_from_index(argv, i);
			exit (1);
		}
		stack_add_back(&stack, node);
		free(argv[i]);
		i++;
	}
	free(argv);
	return (stack);
}
