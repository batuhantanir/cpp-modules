NAME = bsp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
