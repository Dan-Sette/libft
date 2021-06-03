SRC =	ft_bzero.c \
		ft_memccpy.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strdup.c \
		ft_calloc.c

GCC = gcc -Wall -Wextra -Werror -g
OBJECT = $(SRC:.c=.o)
NAME = libft.a

all:	$(NAME)

$(NAME):	$(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

$(OBJECT):		$(SRC)
	$(GCC) -c $(SRC)

clean:
	rm -f $(OBJECT) a.out

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re