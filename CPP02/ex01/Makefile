# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 23:19:19 by root              #+#    #+#              #
#    Updated: 2026/05/14 11:28:45 by aingunza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilamos
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Los files
NAME= fixed01
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re