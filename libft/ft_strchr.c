/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-11 16:31:21 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-11 16:31:21 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	to_find;

	to_find = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == to_find)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == to_find)
		return ((char *)&s[i]);
	return (NULL);
}
