/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_count_words_argv.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-26 15:19:44 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-26 15:19:44 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_update_count_words_argv(char **m, char c, int nb)
{
	int	i;
	int	new_str_nb;
	int	count;

	new_str_nb = nb;
	i = 0;
	while (i < nb)
	{
		count = ft_count_words(m[i], c);
		if (count > 1)
			new_str_nb += count - 1;
		i++;
	}
	return (new_str_nb);
}
