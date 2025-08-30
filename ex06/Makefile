NAME = harlFilter
SRC = Harl.cpp main.cpp
CFLAGS = -Wall -Werror -Wextra --std=c++98 -O3

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

re: clean all
