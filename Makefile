SRC     =	ft_isalpha.c \
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
			ft_memcpy.c	\
			ft_memmove.c	\
			ft_strnstr.c	\
          	ft_atoi.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putnbr_fd.c	\
			ft_putendl_fd.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libft.a

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

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