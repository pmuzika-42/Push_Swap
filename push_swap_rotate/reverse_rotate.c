/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 16:58:43 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 16:58:43 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_sort_list **lst)
{
	t_sort_list	*tmp;

	if ((*lst)->next == NULL)
		return ;
	tmp = stack_last(*lst);
	delete_last_node(lst);
	stack_add_front(lst, tmp);
}
