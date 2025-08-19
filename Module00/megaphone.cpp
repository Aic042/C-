#include <iostream> // To use cout
#include <cctype>	// To use toupper()
#include <stdio.h>
int main(int argc, char *argv[])
{
	// char *str;
	char c;
	char mayuscula;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	
	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c = argv[i][j];
			std::cout << mayuscula << (char)toupper(c);
			j++;
		}
		if ((i + 1) != argc)
			std::cout << " ";
		else
			std::cout << "\n";
		i++;
	}
	
	// printf("i is: %d and argc is %d\n", i, argc);
	// std::cout << "Uppercaser work please\n";
	// std::cout << str;
	// std::cout << "\n";
	// std::cout << toupper(c);
	// std::cout << "\n";
}