NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

MAIN_SRCS = ft_putaddress.c ft_putstr.c ft_putupper_hex.c ft_printf.c ft_putchar.c ft_putunsigned_nbr.c ft_putnbr.c ft_putlower_hex.c
MAIN_OBJS = $(MAIN_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(MAIN_OBJS)
	ar -rc $(NAME) $(MAIN_OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MAIN_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
