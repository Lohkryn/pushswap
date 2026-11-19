NAME = printf.a

SRCS = ft_dispatch_args.c ft_printf.c ft_putchar_pf.c ft_puthex_pf.c ft_puthexptr.c ft_putnbr_pf.c ft_putptr_pf.c ft_putstr_pf.c ft_put_unsigned_pf.c
OBJS = $(SRCS:%.c=%.o)

GCC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(GCC) $(CLAGS)-c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean

.PHONY: all clean fclean re
