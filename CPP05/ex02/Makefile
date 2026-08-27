# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/07 12:49:55 by root              #+#    #+#              #
#    Updated: 2026/08/24 12:25:05 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compilamos
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Los files
NAME= Bureaucrat
SRC = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp Shrubberry_Creation_Form.cpp PresidentialPardonForm.cpp
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