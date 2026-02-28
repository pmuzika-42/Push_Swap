/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-26 16:24:59 by pmuzika           #+#    #+#             */
/*   Updated: 2025-11-26 16:24:59 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function frees all allocated memory and returns NULL

static char	*free_memory(char **save, char **buf)
{
	if (buf && *buf)
	{
		free(*buf);
		*buf = NULL;
	}
	if (save && *save)
	{
		free(*save);
		*save = NULL;
	}
	return (NULL);
}

//This function takes save, updates save and returns a line

static char	*get_line(char **save, char c)
{
	size_t	i;
	char	*tmp;
	char	*line;

	if (!(*save))
		return (NULL);
	tmp = *save;
	i = 0;
	while ((*save)[i] != '\0' && (*save)[i] != c)
		i++;
	*save = ft_substr(*save, i + 1, ft_strlen(*save) - (i + 1));
	if (!(*save) || !(**save))
	{
		free(*save);
		*save = NULL;
	}
	line = ft_substr(tmp, 0, i + 1);
	free(tmp);
	if (!line)
		return (NULL);
	return (line);
}

// In case we read something, we fill save with buffer content

static char	*fill_save(char *save, char **buf)
{
	char	*tmp;

	if (!save)
		save = ft_strdup(*buf);
	else
	{
		tmp = save;
		save = ft_strjoin(save, *buf);
		free(tmp);
	}
	free(*buf);
	*buf = NULL;
	if (!save)
		return (NULL);
	return (save);
}

//In case read == 0 and save != 0, we return the last line

static char	*last_line(char **save, char **buf)
{
	char	*line;

	free(*buf);
	*buf = NULL;
	if (!save || !(*save))
		return (NULL);
	else
	{
		line = ft_strdup(*save);
		free(*save);
		*save = NULL;
		return (line);
	}
}

//We manage different read values and return the next line

char	*get_next_line(int fd)
{
	static char	*save;
	char		*buffer;
	char		*line;
	int			bytes;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	while (!save || !(ft_strchr(save, '\n')))
	{
		buffer = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
		if (!buffer)
			return (NULL);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free_memory(&save, &buffer));
		if (bytes == 0)
			return (last_line(&save, &buffer));
		buffer[bytes] = '\0';
		save = fill_save(save, &buffer);
		if (!save)
			return (NULL);
	}
	line = get_line(&save, '\n');
	return (line);
}
