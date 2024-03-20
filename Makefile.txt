SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJ = $(SRC:%.c=%.o)
	
NAME = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

RM = rm -f
RMDIR = rmdir

.PHONY: all clean fclean re

all: $(NAME) lib

$(NAME): $(SRC) libft.h
	$(CC) $(CFLAGS) -c $(SRC)

lib: 
	ar -cvr libft.a $(OBJ)
	cc main.c -L. -lft

clean:
	$(RM) $(wildcard $(OBJ)) 
    
fclean: clean
	$(RM) $(NAME)
	
re: fclean all
