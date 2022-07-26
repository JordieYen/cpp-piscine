NAME = megaphone

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

MAIN = megaphone.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(INCLUDES) ${MAIN} -o ${NAME}

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean