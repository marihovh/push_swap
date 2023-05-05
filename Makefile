NAME=push_swap
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
CC= gcc
LIBFT= lib/libft.a
CFLAGS= -Wall -Werror -Wextra
RM = rm -rf

all : libcomp $(NAME)

libcomp : 
	cd ./lib && make

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

fclean : clean
	cd ./lib && make fclean
	$(RM) $(NAME)

clean :
	cd ./lib && make clean
	$(RM) $(OBJ)

re : fclean all

.PHONY : all, clean, flcean, re