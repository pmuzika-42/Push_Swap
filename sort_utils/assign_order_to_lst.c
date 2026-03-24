/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_order_to_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 12:44:42 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-17 12:44:42 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_order_to_lst(t_sort_list **lst, int argc)
{
	int			nb_min;
	int			i;
	t_sort_list	*tmp;

	initialise_order(lst);
	i = 0;
	while (i < argc)
	{
		nb_min = initialise_nb_min(*lst);
		tmp = *lst;
		while (tmp != NULL)
		{
			if (tmp->nb < nb_min && tmp->order < 0)
				nb_min = tmp->nb;
			tmp = tmp->next;
		}
		tmp = *lst;
		while (tmp->nb != nb_min)
			tmp = tmp->next;
		tmp->order = i;
		i++;
	}
}
