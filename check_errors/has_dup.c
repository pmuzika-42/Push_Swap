/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:53:38 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:53:38 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check for duplicates

int	has_dup(int argc, char **argv)
{
	int	*num_array;
	int	i;
	int	j;

	i = 0;
	num_array = create_array(argc, argv);
	if (!num_array)
		return (-1);
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (num_array[i] == num_array[j])
			{
				free(num_array);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(num_array);
	return (0);
}
