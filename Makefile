##
## EPITECH PROJECT, 2022
## B-PSU-100-LYN-1-1-myls-gnanmienlie-patrick-levy.n-da
## File description:
## Makefile
##

SRC =	win_condition.c \
		gestion_error.c \
		get_nb.c \
		get_player_position.c \
		main.c \
		move_right_left.c \
		move_up_down.c \
		my_put_nbr.c \
		my_putstr.c \
		my_strlen.c \
		readh.c \

CFLAGS	+=	-g3

OBJ = $(SRC:.c=.o)

NAME = my_sokoban

CSFML = -lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFML)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f *.a $(NAME)

re:	fclean all
