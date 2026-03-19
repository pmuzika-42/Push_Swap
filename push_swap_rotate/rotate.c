/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 17:06:36 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-17 17:06:36 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_sort_list **lst)
{
	t_sort_list	*tmp;

	tmp = *lst;
	*lst = tmp->next;
	tmp->next = NULL;
	stack_add_back(lst, tmp);
}
