.PHONY: clean fclean re make all

NAME		= libft.a

FILENAME	= ft_memset.c

OBJS 		= $(FILENAME:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -I libft.h

all: $(NAME)

$(NAME):
	$(CC) -c $(FILENAME)
	ar rc $(NAME) $(OBJS)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME)
