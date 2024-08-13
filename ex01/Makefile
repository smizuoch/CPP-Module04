NAME = animals

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRCS) $(HEADERS)

re: fclean all

.PHONY: all clean fclean re
