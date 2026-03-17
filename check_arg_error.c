/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 12:04:56 by pmuzika           #+#    #+#             */
/*   Updated: 2026-03-16 12:04:56 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check for strings not numerical or exceeding int limits

static int	is_valid_num(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (0);
		i++;
	}
	if (!(ft_str_is_int(str)))
		return (0);
	return (1);
}

static int	has_valid_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (!(is_valid_num(argv[i])))
			return (0);
		i++;
	}
	return (1);
}

static int	*create_array(int argc, char **argv)
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

// check for duplicates

static int	has_dup(int argc, char **argv)
{
	int	*num_array;
	int	i;
	int	j;

	i = 0;
	num_array = create_array(argc, argv);
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
	free(num_array);
	return (0);
}

int	check_arg_error(int argc, char **argv)
{
	int	duplicates;

	if (!(has_valid_arg(argc, argv)))
		return (1);
	duplicates = has_dup(argc, argv);
	if (duplicates < 0)
	{
		ft_free_mtr(argv, 0);
		exit(1);
	}
	if (duplicates > 0)
		return (1);
	return (0);
}
