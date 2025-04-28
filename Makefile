SRC     = 	main.c	\
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
          	ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
          	ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
          	ft_atoi.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libft_test

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

%.o:	%.c
		gcc -c $< -std=gnu17 -Wall -Wextra

clean:
	rm -f $(OBJ)
	rm -f lib/my/*.o
	rm -f lib/libmy.a
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)

re:	fclean all