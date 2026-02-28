/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_valid_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 12:25:18 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-27 12:25:18 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	is_valid_num(char *str)
{
	int		i;
	long	check_int;

	if (ft_strlen(str) > 11)
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (0);
		i++;
	}
	check_int = ft_atol(str);
	if (check_int < -2147483648 || check_int > 2147483647)
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

int	main(int argc, char **argv)
{
	int	i;
	int	new_arg_nb;

	if (argc < 2)
		return (0);
	argv++;
	argc -= 1;
	new_arg_nb = ft_update_count_words_argv(argv, ' ', argc);
	argv = ft_meta_split(argv, ' ', argc); //free is due
	ft_printf("updated argc : %d\n", new_arg_nb);
	if (!(has_valid_arg(new_arg_nb, argv)))
		return (write(2, "Error\n", 6));
	else
		write(2, "No hay error\n", 14);
	i = 0;
	while (argv[i])
	{
		ft_printf("%s\n", argv[i]);
		free(argv[i]);
		i++;
	}
	free(argv);
	return (0);
}
