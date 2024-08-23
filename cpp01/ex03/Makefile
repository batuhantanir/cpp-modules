NAME = brain

CPPFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
