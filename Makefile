SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
      ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
      ft_memmove.c
OBJ = $(SRC:%.c=%.o)
	
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

RM = rm -f
RMDIR = rmdir

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(wildcard $(OBJ)) 
    
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
