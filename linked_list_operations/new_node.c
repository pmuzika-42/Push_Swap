/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:05:44 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:05:44 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_sort_list	*new_node(int nb)
{
	t_sort_list	*node;

	node = malloc(sizeof (t_sort_list));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = NULL;
	return (node);
}
