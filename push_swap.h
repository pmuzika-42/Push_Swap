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
int			*create_array(int argc, char **argv);
int			has_dup(int argc, char **argv);
int			has_valid_arg(int argc, char **argv);
int			is_valid_num(char *str);
t_sort_list	*build_stack(char **argv);
void		delete_last_node(t_sort_list **lst);
t_sort_list	*new_node(int nb);
void		stack_add_back(t_sort_list **lst, t_sort_list *new);
void		stack_add_front(t_sort_list **lst, t_sort_list *new);
t_sort_list	*stack_last(t_sort_list *lst);
void		free_lst(t_sort_list **lst);
void		assign_order_to_lst(t_sort_list **lst, int argc);
int			get_nb_max(t_sort_list *lst);
int			get_nb_min(t_sort_list *lst);
int			initialise_nb_min(t_sort_list *lst);
void		initialise_order(t_sort_list **lst);
int			stack_is_sorted(t_sort_list *lst);
void		rotate(t_sort_list **lst);
void		reverse_rotate(t_sort_list **lst);
void		swap(t_sort_list **lst);
void		push(t_sort_list **dst, t_sort_list **src);
void		pa(t_sort_list **stack_a, t_sort_list **stack_b);
void		pb(t_sort_list **stack_a, t_sort_list **stack_b);
void		sa(t_sort_list **lst);
void		sb(t_sort_list **lst);
void		ra(t_sort_list **lst);
void		rb(t_sort_list **lst);
void		rra(t_sort_list **lst);
void		rrb(t_sort_list **lst);
void		sort_small_stack(t_sort_list **lst, int argc);
void		sort_stack_of_3(t_sort_list **lst);
void		sort_stack_of_4(t_sort_list **stack_a, t_sort_list **stack_b);
void		sort_stack_of_5(t_sort_list **stack_a, t_sort_list **stack_b);
void		sort_big_stack(t_sort_list **stack_a, int argc);
int			bit_size(int nb);
void		radix_sort(t_sort_list **stack_a, t_sort_list **stack_b, int argc);

#endif
