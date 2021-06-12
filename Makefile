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
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \

BONUS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

GCC = gcc
FLAGS =  -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)
NAME = libft.a

all:	$(NAME)

$(NAME):	$(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

$(OBJECT):		$(SRC)
	$(GCC) $(FLAGS) -c $(SRC)

bonus:	$(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS)

$(OBJ_BONUS):	$(BONUS)
	$(GCC) $(FLAGS) -c $(BONUS)

clean:
	rm -f $(OBJECT) a.out

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re