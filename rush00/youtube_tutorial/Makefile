# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/18 11:13:23 by mbutt             #+#    #+#              #
#    Updated: 2020/01/18 11:19:55 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC:=\033[0m
GREEN:=\033[1;32m

NAME = ft_retro
CC = g++
CFLAGS = -I. -c -g
WFLAGS = #-Wall -Wextra -Werror -std=c++98

SRC = *.cpp
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(WFLAGS) $(SRC) #creates object file
	$(CC) $(OBJ) -o $(NAME) -lncurses
	@echo "${GREEN}Generated ft_retro game succesfully.${NC}"	


clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
.PHONY: all clean fclean re
