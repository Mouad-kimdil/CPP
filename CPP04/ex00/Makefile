SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
INC = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
NAME = animal

RM = rm -rf
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
