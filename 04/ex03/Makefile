NAME = Materia

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98 -I inc

SRCDIR = src
INCDIR = inc
OBJDIR = objects
DEPDIR = dependances

SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Character.cpp $(SRCDIR)/Ice.cpp \
       $(SRCDIR)/Cure.cpp $(SRCDIR)/AMateria.cpp $(SRCDIR)/MateriaSource.cpp
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))
DEPS = $(addprefix $(DEPDIR)/, $(notdir $(SRCS:.cpp=.d)))

all: $(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR) $(DEPDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -MMD -MF $(DEPDIR)/$*.d

$(OBJDIR) $(DEPDIR):
	mkdir -p $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
