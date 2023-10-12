# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 12:38:07 by wpicanci          #+#    #+#              #
#    Updated: 2023/10/06 12:38:11 by wpicanci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc 
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)
	
%.o:%.c
	$(CC) $(FLAGS) -c $<
	
clean: 
	rm -rf $(OBJ)
	
fclean:	clean
	rm -f $(NAME)
	
re:	fclean all 

