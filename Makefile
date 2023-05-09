NAME = libft.a #prog name
CC=gcc #compilator
CFLAGS=-Wall -Werror -Wextra #Compilation options
SRC= ft_isalpha.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_isalnum.c \
ft_strchr.c ft_isascii.c ft_isprint.c ft_strlen.c
OBJ= $(SRC: .c = .o) #convert .c in .o
RM= rm -f

all: $(NAME)

#Rule to render a binary
$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

#S'assure que les fonctions soient bien appellées
clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re