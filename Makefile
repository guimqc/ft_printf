SRCS = ft_printf.c print_hex.c format_and_print.c main.c \

OBJ = $(SRCS:%c=%o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

test: $(OBJ)
	cd libft && make -s
	$(CC) $(CFLAGS) -o test $(SRCS) libft/libft.a && ./test && rm test && make fclean

clean:
	$(RM) $(OBJ)
	cd libft && make clean -s

fclean: clean
	$(RM) $(NAME) test
	cd libft && make fclean -s

re: fclean all
