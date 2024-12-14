NAME = minitalk.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

PRINTF = ft_printf/libftprintf.a

CLIENT = client
SERVER = server

SRC = client.c server.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SERVER) $(CLIENT) $(OBJ)

$(SERVER) : $(OBJ)
			make -C ./ft_printf
			$(CC) $(CFLAGS) server.c $(PRINTF) -o $@


$(CLIENT) : $(OBJ)
			$(CC) $(CFLAGS) client.c $(PRINTF) -o $@

clean:
		make clean -C ./ft_printf
		$(RM) $(OBJ)

fclean: clean
		make fclean -C ./ft_printf
		$(RM) $(CLIENT) $(SERVER)

re: fclean all

.PHONY: all clean fclean re