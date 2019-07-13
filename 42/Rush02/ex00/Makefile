# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabosse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 15:14:45 by dabosse           #+#    #+#              #
#    Updated: 2019/06/23 20:39:28 by cyrlemai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

INCLUDE = .

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	main.c				\
		dict_1.c			\
		dict_2.c			\
		print_number.c		\
		print_below_1000.c	\
		create_entry_name.c	\
		string_fts.c		\

OBJS = $(SRCS:.c=.o)

HEADER = rush02.h

all: $(NAME)

%.o: %.c $(INCLUDE)/$(HEADER)
	$(CC) -I $(INCLUDE) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) -I $(INCLUDE) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
