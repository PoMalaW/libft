NAME = libft.a #prog name
CC=gcc #compilator
CFLAGS=-Wall -Werror -Wextra #Flags de compilation
LDLIBS=-lft
LDFLAGS=-L.
SRC= ft_isalpha.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_isalnum.c \
ft_strchr.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_atoi.c \
ft_strlcpy.c
OBJ= $(SRC: .c = .o) #convert .c in .o
RM= rm -f

#S'assure que les fonctions soient bien appellées
all: $(NAME)

#cree la librairie et compile
$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re