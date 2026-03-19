/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise_nb_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:03:06 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:03:06 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	initialise_nb_min(t_sort_list *lst)
{
	while (lst != NULL)
	{
		if (lst->order < 0)
			return (lst->nb);
		lst = lst->next;
	}
	return (0);
}
