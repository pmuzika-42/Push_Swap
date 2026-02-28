/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-08 16:44:05 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-08 16:44:05 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_int(unsigned int nb)
{
	int	length;

	length = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

static void	fill_buffer(char *buffer, unsigned int nb, int size, int first)
{
	buffer[size] = '\0';
	while (size > first)
	{
		size--;
		buffer[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char	*buffer;
	int		i;

	i = ft_length_int(n);
	buffer = malloc(i + 1);
	if (!buffer)
		return (0);
	fill_buffer(buffer, n, i, 0);
	return (buffer);
}
