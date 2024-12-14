NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
		ft_putnbr_unsigned.c ft_putnbr_base.c ft_putpointer.c
OBJ = $(SRC:.c=.o)

LIBC = ar -rcs

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
