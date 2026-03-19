# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: pmuzika <pmuzika@student.42malaga.com>     #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2026-03-18 11:32:08 by pmuzika           #+#    #+#             #
#   Updated: 2026-03-18 11:32:08 by pmuzika          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = check_errors/check_arg_error.c \
	  check_errors/create_array.c \
	  check_errors/has_dup.c \
	  check_errors/has_valid_arg.c \
	  check_errors/is_valid_num.c \
	  linked_list_operations/build_stack.c \
	  linked_list_operations/delete_last_node.c \
	  linked_list_operations/free_lst.c \
	  linked_list_operations/new_node.c \
	  linked_list_operations/stack_add_back.c \
	  linked_list_operations/stack_add_front.c \
	  linked_list_operations/stack_last.c \
	  sort_utils/assign_order_to_int.c \
	  sort_utils/assign_order_to_lst.c \
	  sort_utils/get_nb_max.c \
	  sort_utils/get_nb_min.c \
	  sort_utils/has_negative_int.c \
	  sort_utils/initialise_nb_min.c \
	  sort_utils/initialise_order.c \
	  sort_utils/order_equal_nb.c \
	  sort_utils/stack_is_sorted.c \
	  push_swap_rotate/pa.c \
	  push_swap_rotate/pb.c \
	  push_swap_rotate/push.c \
	  push_swap_rotate/ra.c \
	  push_swap_rotate/rb.c \
	  push_swap_rotate/reverse_rotate.c \
	  push_swap_rotate/rotate.c \
	  push_swap_rotate/rra.c \
	  push_swap_rotate/rrb.c \
	  push_swap_rotate/sa.c \
	  push_swap_rotate/sb.c \
	  push_swap_rotate/swap.c \
	  sort_small_stack/sort_small_stack.c \
	  sort_small_stack/sort_stack_of_3.c \
	  sort_small_stack/sort_stack_of_4.c \
	  sort_small_stack/sort_stack_of_5.c \
	  push_swap.c \
	  sort_big_stack.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT) :
	make -C ./libft all

$(NAME) : $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re