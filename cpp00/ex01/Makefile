NAME = Phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Box.cpp Contact.cpp main.cpp Phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
