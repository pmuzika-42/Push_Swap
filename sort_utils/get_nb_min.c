/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:57:25 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:57:25 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_nb_min(t_sort_list *lst)
{
	int	nb_min;

	nb_min = lst->nb;
	lst = lst->next;
	while (lst != NULL)
	{
		if (lst->nb < nb_min)
			nb_min = lst->nb;
		lst = lst->next;
	}
	return (nb_min);
}
