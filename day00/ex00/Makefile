# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 19:16:35 by mbutt             #+#    #+#              #
#    Updated: 2020/01/09 19:58:49 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = g++
CFLAGS = -I. -c -g
WFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = megaphone.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(WFLAGS) $(SRC) # creates object file
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
.PHONY: all clean fclean re
