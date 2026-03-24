/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 12:04:56 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-16 12:04:56 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg_error(int argc, char **argv)
{
	int	duplicates;

	if (!(has_valid_arg(argc, argv)))
	{
		ft_free_mtr_from_index(argv, 0);
		return (1);
	}
	duplicates = has_dup(argc, argv);
	if (duplicates < 0)
	{
		ft_free_mtr_from_index(argv, 0);
		exit(1);
	}
	if (duplicates > 0)
	{
		ft_free_mtr_from_index(argv, 0);
		return (1);
	}
	return (0);
}
