# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 20:00:30 by mbutt             #+#    #+#              #
#    Updated: 2020/01/12 17:20:10 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC:=\033[0m
GREEN:=\033[1;32m

NAME = phonebook
CC = g++
CFLAGS = -I. -c -g
WFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = *.cpp
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(WFLAGS) $(SRC) # creates object file
	$(CC) $(OBJ) -o $(NAME)
	@echo "${GREEN}Generated phonebook program succesfully.${NC}"	


clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
.PHONY: all clean fclean re
