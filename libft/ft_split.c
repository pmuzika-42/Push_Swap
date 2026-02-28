/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-18 13:47:54 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-18 13:47:54 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(const char *str, char c)
{
	size_t	i;
	size_t	count;

	if (str[0] != c && str[0] != '\0')
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

static void	*ft_freematrix(char **ptr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static char	*fill_string(char *string, char const *s, char c, size_t *j)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = *j;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	string = ft_substr(s, i - len, len);
	*j = i;
	return (string);
}

static char	**empty_array(void)
{
	char	**arr;

	arr = malloc(sizeof(char *));
	if (!arr)
		return (NULL);
	arr[0] = (void *)0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (c == '\0' && *s == '\0')
		return (empty_array());
	i = 0;
	j = 0;
	arr = malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < count_strings(s, c))
	{
		while (s[j] == c)
			j++;
		arr[i] = fill_string(arr[i], s, c, &j);
		if (!arr[i])
			return (ft_freematrix(arr, i));
		i++;
	}
	arr[count_strings(s, c)] = NULL;
	return (arr);
}
