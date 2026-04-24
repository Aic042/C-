# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fPIE

# Files
NAME = SED
SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(NAME)

# How to build the executable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# How to build object files
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJ)

# Clean up everything
fclean: clean
	rm -f $(NAME)

# Rebuild from scratch
re: fclean all
.PHONY: all clean fclean re