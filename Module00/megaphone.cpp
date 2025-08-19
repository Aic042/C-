#include <iostream> // To use cout
#include <cctype>	// To use toupper()

int main(int argc, char *argv[])
{
	// char *str;
	char c;
	char mayuscula = c;
	int i = 1;
	int j = 0;
	while (i != argc)
	{
		while (argv[i][j])
		{
			c = argv[i][j];
			std::cout << mayuscula << (char)toupper(c);
			j++;
		}
		i++;
		if (i != argc)
			std::cout << " ";
		else
			std::cout << "\n";
	}
	
	// std::cout << "Uppercaser work please\n";
	// std::cout << str;
	// std::cout << "\n";
	// std::cout << toupper(c);
	// std::cout << "\n";
}