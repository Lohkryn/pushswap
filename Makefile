NAME = push_swap

SRCS = src/ft_assign_rank.c src/ft_bring_to_next_chunk.c src/ft_checkduplicate.c src/ft_check_flag.c src/ft_checkinput.c src/ft_checkintrange.c\
		src/ft_check_sort.c src/ft_chunk_sort.c src/ft_find_min.c src/ft_flag.c src/ft_freestack.c src/ft_get_chunk_size.c src/ft_has_chunk.c\
		src/ft_init_stack.c src/ft_is_sorted.c src/ft_move_min_to_top.c src/ft_newnode.c src/ft_pos.c src/ft_print_node.c src/ft_push_chunk.c\
		src/ft_selection_sort.c src/ft_select_sort.c src/ft_short_sort.c src/ft_sort_five.c src/ft_sort_radix.c src/ft_sort_three.c src/ft_stackadd_back.c\
		src/ft_stackiter.c src/ft_stacklast.c src/ft_stack_size.c src/ft_target_pa.c src/pa.c src/pb.c src/push_swap.c src/ra.c src/rb.c src/rra.c src/rrb.c\
		src/rr.c src/rrr.c src/sa.c src/sb.c src/ss.c
OBJS = $(SRCS:src/%.c=obj/%.o)

LIBFT = libft/libft.a
PRINTF = printf/printf.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCLUDES = -Iincludes -Ilibft -Iprintf

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(PRINTF):
	$(MAKE) -C printf

obj/%.o: src/%.c
	@mkdir -p obj
	$(GCC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)

clean:
	$(RM) -r obj
	$(MAKE) -C libft clean
	$(MAKE) -C printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C printf fclean

re: fclean all

.PHONY: all clean fclean re
