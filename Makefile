# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 14:26:11 by cbukuba           #+#    #+#              #
#    Updated: 2021/11/15 15:55:30 by cbukuba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
FLAGS = -Wall -W -Werror
EXEC = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC : .c = .o)

all : $(EXEC)

$(EXEC) :
	$(CC) $(FLAGS) -o $(EXEC) $(SRC)

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -o $(OBJ) $(SRC)

clean :
	rm -f *.o 

fclean : clean
	rm -f $(EXEC)

re : fclean all
