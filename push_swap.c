/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-17 11:57:30 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-17 11:57:30 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"
#include "libft/libft.h"

//check for strings not numerical or exceeding int limits

int	is_valid_num(char *str)
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

int	has_valid_arg(int argc, char **argv)
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

int	*create_array(int	argc, char **argv)
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

int	has_dup(int argc, char **argv)
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

int	main(int argc, char **argv)
{
	int	new_argc;
	int	duplicates;

	if (argc < 2)
		return (0);
	argv++;
	argc -= 1;
	new_argc = ft_update_count_words_argv(argv, ' ', argc);
	argv = ft_meta_split(argv, ' ', argc); //free is due
	duplicates = has_dup(new_argc, argv);
	if (duplicates < 0)
		free_matrix(argv); // write the function
	if (!(has_valid_arg(new_argc, argv)) || duplicates > 0)
		return (write(2, "Error\n", 6));
	return (0);
}
