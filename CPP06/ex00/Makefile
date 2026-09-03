# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/07 12:49:55 by root              #+#    #+#              #
#    Updated: 2026/09/03 14:09:28 by aingunza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compilamos
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Los files
NAME= Scalar
SRC = main.cpp Scalar.cpp
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