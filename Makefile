NAME=push_swap
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
CC= gcc
LIBFT=lib/libft.a
PRINTF=printf/libftprintf.a
CFLAGS= -Wall -Werror -Wextra
RM = rm -rf

all : comp $(NAME)

comp : 
	cd ./lib && make
	cd ./printf && make

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)

fclean : clean
	cd ./lib && make fclean
	cd ./printf && make fclean
	$(RM) $(NAME)

clean :
	cd ./lib && make clean
	cd ./printf && make clean
	$(RM) $(OBJ)

re : fclean all

.PHONY : all, clean, flcean, re