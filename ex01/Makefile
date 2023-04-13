# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makacem <makacem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 16:57:43 by makacem           #+#    #+#              #
#    Updated: 2023/04/12 17:07:48 by makacem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Zombie.hpp

SRC = main.cpp Zombie.cpp zombieHorde.cpp \

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