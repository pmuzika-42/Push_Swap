/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:17:35 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:17:35 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pointer_conversion(va_list args)
{
	uintptr_t	x;
	void		*ptr;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	x = (uintptr_t)ptr;
	return (write(1, "0x", 2) + ft_puthex(x, 'a'));
}
