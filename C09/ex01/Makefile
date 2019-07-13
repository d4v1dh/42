# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabosse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/26 01:54:27 by dabosse           #+#    #+#              #
#    Updated: 2019/06/26 19:14:21 by dabosse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRC = ./srcs/
HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)ft_putchar.c	\
	  $(PATH_SRC)ft_putstr.c	\
	  $(PATH_SRC)ft_strcmp.c	\
	  $(PATH_SRC)ft_strlen.c	\
	  $(PATH_SRC)ft_swap.c		\

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME):
		gcc $(FLAGS) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
