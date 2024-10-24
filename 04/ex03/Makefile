NAME = Materia

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS = src/main.cpp

TMPDIR = tmp/
OBJDIR = $(TMPDIR)obj
DEPDIR = $(TMPDIR)dep

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
	rm -rf $(TMPDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re