/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-20 16:31:59 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-20 16:31:59 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_int(int nb)
{
	int	length;

	if (nb < 0)
	{
		length = 2;
		nb = -nb;
	}
	else
		length = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

static void	fill_buffer(char *buffer, int nb, int size, int first)
{
	buffer[size] = '\0';
	while (size > first)
	{
		size--;
		buffer[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		i;

	if (n == -2147483648)
	{
		buffer = ft_strdup("-2147483648");
		return (buffer);
	}
	i = ft_length_int(n);
	buffer = malloc(i + 1);
	if (!buffer)
		return (0);
	if (n < 0)
	{
		buffer[0] = '-';
		fill_buffer(buffer, -n, i, 1);
	}
	else
		fill_buffer(buffer, n, i, 0);
	return (buffer);
}
