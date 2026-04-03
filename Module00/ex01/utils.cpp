#include "Contact.hpp"
#include "phonebook.hpp"

std::string get_non_empty_input(const std::string &prompt)
{
	std::string	input;

	while(1) //forever
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			std::cout << "Exiting, ctrl + D";
			exit(0); //para controlar el ctrl+D
		}
			if (!input.empty())
		return(input); //si el input no esta vacio, nos vamos c:
		std::cout << "Input cannot be empty\n";
	}
}