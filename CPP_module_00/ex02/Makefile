NAME =		Account

CC =		clang++

SRC =		Account.cpp tests.cpp

OBJS =		$(SRC:.cpp=.o)

CFLAGS = 	-Wall -Wextra -Werror -g

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make

.phony:
	all clean fclean re