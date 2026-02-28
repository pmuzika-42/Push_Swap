/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-27 14:57:58 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-27 14:57:58 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_conversion(char c, va_list args)
{
	if (c == 'c')
		return (ft_char_conversion(args));
	if (c == 's')
		return (ft_string_conversion(args));
	if (c == 'p')
		return (ft_pointer_conversion(args));
	if (c == 'i' || c == 'd')
		return (ft_int_conversion(args));
	if (c == 'u')
		return (ft_u_conversion(args));
	if (c == 'x')
		return (ft_x_conversion(args));
	if (c == 'X')
		return (ft_x_upper_conversion(args));
	if (c == '%')
		return (ft_print_percentage());
	return (0);
}

static int	validformat_check(char c)
{
	if (c == 'c')
		return (1);
	if (c == 's')
		return (1);
	if (c == 'p')
		return (1);
	if (c == 'd')
		return (1);
	if (c == 'i')
		return (1);
	if (c == 'u')
		return (1);
	if (c == 'x')
		return (1);
	if (c == 'X')
		return (1);
	if (c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		bytes;
	int		i;
	va_list	args;

	bytes = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!(validformat_check(format[i + 1])))
				return (-1);
			bytes = bytes + ft_conversion(format[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			bytes++;
			i++;
		}
	}
	va_end(args);
	return (bytes);
}
