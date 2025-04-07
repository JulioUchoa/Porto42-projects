NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC_DIR = srcs/
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(SRC:c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBS)
$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
