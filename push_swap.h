/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 13:55:32 by pmuzika           #+#    #+#             */
/*   Updated: 2026-02-24 13:55:32 by pmuzika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_sort_list
{
	int					nb;
	int					order;
	struct s_sort_list	*next;
}						t_sort_list;

int			check_arg_error(int argc, char **argv);
t_sort_list	*build_stack(char **argv);
void		free_lst(t_sort_list *lst);
void	assign_order_to_lst(t_sort_list *lst, int argc);

#endif
