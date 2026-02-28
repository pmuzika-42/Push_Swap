/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:19:13 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:19:13 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_u_conversion(va_list args)
{
	unsigned int	nb;
	int				i;
	char			*res;

	nb = va_arg(args, unsigned int);
	res = ft_uitoa(nb);
	if (!res)
		return (-1);
	i = 0;
	while (res[i] != '\0')
	{
		ft_putchar_fd(res[i], 1);
		i++;
	}
	free(res);
	return (i);
}
