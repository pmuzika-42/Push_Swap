/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-17 11:57:30 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-17 11:57:30 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			new_argc;
	t_sort_list	*stack_a;

	if (argc < 2)
		return (0);
	argv++;
	argc -= 1;
	new_argc = ft_update_count_words_argv(argv, ' ', argc);
	argv = ft_meta_split(argv, ' ', argc);
	if (!argv)
		return (1);
	if (check_arg_error(new_argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	stack_a = build_stack(argv);
	if (stack_is_sorted(stack_a))
		return (free_lst(&stack_a), 0);
	if (new_argc <= 5)
		sort_small_stack(&stack_a, new_argc);
	else
		sort_big_stack(&stack_a, new_argc);
	free_lst(&stack_a);
	return (0);
}
