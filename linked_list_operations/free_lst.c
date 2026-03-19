/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:44:22 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:44:22 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// free all the nodes of the list

void	free_lst(t_sort_list **lst)
{
	t_sort_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}
