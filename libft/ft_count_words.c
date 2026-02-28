/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-26 14:46:28 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-26 14:46:28 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	if (!str || str[0] == '\0')
		return (0);
	if (str[0] != c)
		count = 1;
	else
		count = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] == c && str[i] != c)
			count++;
		i++;
	}
	return (count);
}
