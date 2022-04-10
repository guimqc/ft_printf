SRCS =	ft_printf.c format_and_print.c print_x.c print_p.c print_c.c print_s.c print_nbr.c print_percent.c print_u.c \

OBJ = $(SRCS:%c=%o)

LIBOBJ =	libft/ft_strlen.o libft/ft_calloc.o libft/ft_bzero.o libft/ft_strjoin.o libft/ft_itoa.o libft/ft_ltoa.o \
			libft/ft_itox.o libft/ft_toupper.o libft/ft_ultox.o \

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

MAKELIB = cd libft && make -s

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKELIB)
	ar rcs $(NAME) $(OBJ) $(LIBOBJ)

test:
	$(MAKELIB)
	$(CC) $(CFLAGS) -o test main.c $(SRCS) libft/libft.a && ./test && rm test && make fclean

clean:
	$(RM) $(OBJ)
	cd libft && make clean -s

fclean: clean
	$(RM) $(NAME) test
	cd libft && make fclean -s

re: fclean all
