# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makacem <makacem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 11:38:40 by makacem           #+#    #+#              #
#    Updated: 2023/04/15 11:42:58 by makacem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Harl.hpp

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS)  $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all