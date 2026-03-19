/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:56:49 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:56:49 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_nb_max(t_sort_list *lst)
{
	int	nb_max;

	nb_max = lst->nb;
	lst = lst->next;
	while (lst != NULL)
	{
		if (lst->nb > nb_max)
			nb_max = lst->nb;
		lst = lst->next;
	}
	return (nb_max);
}
