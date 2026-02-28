/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:21:49 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:21:49 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_x_conversion(va_list args)
{
	unsigned int	nb;

	nb = (unsigned int)va_arg(args, int);
	return (ft_puthex((uintptr_t)nb, 'a'));
}
