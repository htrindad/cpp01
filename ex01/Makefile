NAME = zombie

SRC = Zombie.cpp zombieHorde.cpp main.cpp

CFLAGS = -Wall -Werror -Wextra --std=c++98 -O3

$(NAME):
	c++ $(SRC) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

re: clean all
