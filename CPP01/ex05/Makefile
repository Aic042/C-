# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/25 13:22:34 by aingunza          #+#    #+#              #
#    Updated: 2026/04/25 18:05:07 by aingunza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilamos
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fPIE

# Los files
NAME= Harl2.0
SRC = main.cpp Harl.cpp 
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
