/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-17 12:57:53 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-17 12:57:53 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"


int	*fill_int_array(int	argc, char **argv)
{
	int	*nb_array;
	int	i;

	i = 0;
	nb_array = malloc(argc * sizeof(int));
	if (!nb_array)
		return (NULL);
	while (i < argc)
	{
		nb_array[i] = ft_atoi(argv[i]);
		i++;
	}
	return (nb_array);
}

int	has_duplicates(int argc, char **argv)
{
	int	*num_array;
	int	i;
	int	j;

	i = 0;
	num_array = fill_int_array(argc, argv);
	if (!num_array)
		return (-1);
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (num_array[i] == num_array[j])
			{
				free(num_array);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	argv++;
	if (has_duplicates(argc - 1, argv))
		return (write(2, "Error\n", 6));

	return (0);
}

/*
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		return (0);
	argv++;
	if (argc == 2 && (ft_strchr(argv[0], ' ')))
		argv = ft_split(argv[0], ' ');
	while (argv[i])
	{
		ft_printf("%s\n", argv[i]);
		free(argv[i]);
		i++;
	}
	free(argv);
	return (0);
}*/
