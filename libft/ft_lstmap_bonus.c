/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-24 18:47:27 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-24 18:47:27 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*full_list(t_list *l, t_list *n, void *(*f)(void *),
		void (*d)(void *))
{
	void	*temp;
	t_list	*new_element;

	new_element = n;
	l = l->next;
	while (l != NULL)
	{
		temp = f(l->content);
		if (!temp)
		{
			ft_lstclear(&n, d);
			return (NULL);
		}
		new_element->next = ft_lstnew(temp);
		if (!new_element->next)
		{
			d(temp);
			ft_lstclear(&n, d);
			return (NULL);
		}
		new_element = new_element->next;
		l = l->next;
	}
	return (n);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = f(lst->content);
	if (!temp)
		return (NULL);
	new_lst = ft_lstnew(temp);
	if (!new_lst)
	{
		del(temp);
		return (NULL);
	}
	new_lst = full_list(lst, new_lst, f, del);
	return (new_lst);
}
