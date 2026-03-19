/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_negative_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:00:48 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 18:00:48 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check for negative int

int	has_negative_int(t_sort_list *lst)
{
	while (lst != NULL)
	{
		if (lst->nb < 0)
			return (1);
		lst = lst->next;
	}
	return (0);
}
