/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_meta_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-25 13:00:20 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-25 13:00:20 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_reverse_freematrix(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static char	**secure_split(char **dst, char *src, char c, int i)
{
	char	**split_str;

	split_str = ft_split(src, c);
	if (!split_str)
	{
		ft_reverse_freematrix(dst, i);
		exit(1);
	}
	return (split_str);
}

static char	*secure_strdup(char **dst, char *src, int i)
{
	char	*str;

	str = ft_strdup(src);
	if (!str)
	{
		ft_reverse_freematrix(dst, i);
		exit(1);
	}
	return (str);
}

static char	**copy_matrix(char **dst, char **src, int nb, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split_str;

	i = 0;
	j = 0;
	while (i < nb)
	{
		if (!(ft_strchr(src[i], c)))
		{
			dst[j] = secure_strdup(dst, src[i], j);
			j++;
		}
		else
		{
			split_str = secure_split(dst, src[i], c, j);
			k = 0;
			while (split_str[k])
				dst[j++] = split_str[k++];
			free(split_str);
		}
		i++;
	}
	return (dst);
}

char	**ft_meta_split(char **mtr, char c, int str_nb)
{
	int		new_str_nb;
	char	**new_mtr;

	if (!mtr)
		return (NULL);
	new_str_nb = ft_update_count_words_argv(mtr, c, str_nb);
	new_mtr = malloc(sizeof(char *) * (new_str_nb + 1));
	if (!new_mtr)
		return (NULL);
	new_mtr = copy_matrix(new_mtr, mtr, str_nb, c);
	new_mtr[new_str_nb] = NULL;
	return (new_mtr);
}
