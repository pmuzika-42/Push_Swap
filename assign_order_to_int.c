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

// assign order equal to nb

void	order_equal_nb(t_sort_list *lst)
{
	while (lst != NULL)
	{
		lst->order = lst->nb;
		lst = lst->next;
	}
}

void	initialise_order(t_sort_list *lst)
{
	while (lst != NULL)
	{
		lst->order = -1;
		lst = lst->next;
	}
}

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

void	assign_order_to_int(t_sort_list *lst, int argc)
{
	int	nb_min;
	int	i;
	t_sort_list *tmp;

	i = 0;
	while (i < argc)
	{
		nb_min = initialise_nb_min(lst);
		tmp = lst;
		while (tmp != NULL)
		{
			if (tmp->nb < nb_min && tmp->order < 0)
				nb_min = tmp->nb;
			tmp = tmp->next;
		}
		tmp = lst;
		while (tmp->nb != nb_min)
			tmp = tmp->next;
		tmp->order = i;
		i++;
	}
}

void	assign_order_to_lst(t_sort_list *lst, int argc)
{
	if (!(has_negative_int(lst)))
		order_equal_nb(lst);
	else
	{
		initialise_order(lst);
		assign_order_to_int(lst, argc);
	}
}
