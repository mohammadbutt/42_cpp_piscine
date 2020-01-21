# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 22:45:34 by mbutt             #+#    #+#              #
#    Updated: 2020/01/20 22:46:14 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC:=\033[0m
GREEN:=\033[1;32m

NAME = convert
CC = g++
CFLAGS = -I. -c -g
WFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = *.cpp
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(WFLAGS) $(SRC) # creates object file
	$(CC) $(OBJ) -o $(NAME)
	@echo "${GREEN}Generated conversion program succesfully.${NC}"	


clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
.PHONY: all clean fclean re
