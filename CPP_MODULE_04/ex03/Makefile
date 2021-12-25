NAME =		materials

CC =		clang++

SRC =		main.cpp AMateria.cpp ICharacter.cpp Character.cpp Ice.cpp Cure.cpp \
			IMateriaSource.cpp MateriaSource.cpp

OBJS =		$(SRC:.cpp=.o)

CFLAGS = 	-Wall -Wextra -Werror -g -std=c++98

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