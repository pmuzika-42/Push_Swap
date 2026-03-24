/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:50:40 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-19 17:50:40 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check for strings not numerical or exceeding int limits

int	is_valid_num(char *str)
{
	int		i;

	if (!str || str[0] == '\0')
		return (0);
	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_isdigit(str[i + 1])))
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (0);
		i++;
	}
	if (!(ft_str_is_int(str)))
		return (0);
	return (1);
}
