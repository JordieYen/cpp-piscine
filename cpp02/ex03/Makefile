NAME = bsp

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean