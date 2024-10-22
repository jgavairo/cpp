NAME = polymorph

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

OBJDIR = obj
DEPDIR = dep

OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
DEPS = $(addprefix $(DEPDIR)/, $(SRCS:.cpp=.d))

all: $(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR) $(DEPDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -MMD -MF $(DEPDIR)/$*.d

$(OBJDIR) $(DEPDIR):
	mkdir -p $@

clean:
	rm -f $(OBJS) $(DEPS)
	rm -rf $(OBJDIR) $(DEPDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re