# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 12:51:41 by selopez-          #+#    #+#              #
#    Updated: 2024/01/13 19:55:50 by selopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libf.a
CC= gcc
FLAGS= -Wall -Wextra -Werror
SRC= $(shell find . -name '*.c')

OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(NAME)

fclean: clean
	rm *.o

re: fclean all

	@ar r $(NAME) $(OBJ)

.PHONY: all clean fclean re
