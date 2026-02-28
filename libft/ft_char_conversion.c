/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 15:15:48 by pmuzika           #+#    #+#             */
/*   Updated: 2025-12-17 15:15:48 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_conversion(va_list args)
{
	char	c;

	c = (unsigned char)va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}
