/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:20:17 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:20:17 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(uintptr_t x, char a)
{
	uintptr_t	div;
	char		c;
	int			bytes;

	bytes = 0;
	div = 1;
	while (x / div >= 16)
		div = div * 16;
	while (div > 0)
	{
		if (x / div < 10)
			c = (x / div) + '0';
		else if (x / div >= 10)
		{
			if (a == 'a')
				c = (x / div) + 'a' - 10;
			else if (a == 'A')
				c = (x / div) + 'A' - 10;
		}
		ft_putchar_fd(c, 1);
		bytes++;
		x = x % div;
		div = div / 16;
	}
	return (bytes);
}
