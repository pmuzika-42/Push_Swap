/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_valid_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:51:36 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:51:36 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_valid_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (!(is_valid_num(argv[i])))
			return (0);
		i++;
	}
	return (1);
}
