# Compilamos
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Los files
NAME= phonebook
SRC = contact.cpp phonebook.cpp main.cpp getters.cpp utils.cpp
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