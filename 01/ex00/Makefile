# Nom de l'exécutable
NAME = zombie

# Compilateur et options de compilation
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut pour compiler l'exécutable
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Règle pour compiler les fichiers objets
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Commande pour nettoyer les fichiers objets
clean:
	rm -f $(OBJS)

# Commande pour nettoyer les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Commande pour recompiler tout le projet
re: fclean all

# Indiquer que clean, fclean, et re ne sont pas des fichiers
.PHONY: all clean fclean re
