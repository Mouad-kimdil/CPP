SRC = megaphone.cpp

NAME = megaphone
RM = rm -rf

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(addprefix obj/, $(SRC:.cpp=.o))

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} obj

fclean: clean
	${RM} ${NAME}

re: fclean all
