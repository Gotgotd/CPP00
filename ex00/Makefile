NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = obj/
SRC =	megaphone.cpp\

OBJS = $(SRC:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR) 

fclean: clean
	rm -rf $(NAME)

re: fclean all