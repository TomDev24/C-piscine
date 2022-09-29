CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=*.cpp
NAME=pointers

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
