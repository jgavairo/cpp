NAME = harlFilter

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re