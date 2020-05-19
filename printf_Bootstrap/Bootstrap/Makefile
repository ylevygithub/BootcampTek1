##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	sum_stdarg.c	\
		disp_stdarg.c	\
		my_putstr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
