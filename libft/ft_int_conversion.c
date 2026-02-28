/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:21:04 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:21:04 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_conversion(va_list args)
{
	int		nb;
	int		i;
	char	*res;

	nb = va_arg(args, int);
	res = ft_itoa(nb);
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
