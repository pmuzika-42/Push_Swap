/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:52:36 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:52:36 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array(int argc, char **argv)
{
	int	*nb_array;
	int	i;

	i = 0;
	nb_array = malloc(argc * sizeof(int));
	if (!nb_array)
		return (NULL);
	while (i < argc)
	{
		nb_array[i] = ft_atoi(argv[i]);
		i++;
	}
	return (nb_array);
}
