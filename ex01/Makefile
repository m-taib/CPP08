NAME = Span
SRC= main.cpp Span.cpp
OSRC= $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OSRC)
	c++ $(CFLAGS) $^ -o $@

%.o : %.c Span.hpp
	c++ $(CFLAGS) -c $<

clean :
	rm -rf *.o
fclean :
	rm -rf *.o $(NAME)

re : fclean all

