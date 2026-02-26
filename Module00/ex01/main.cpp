#include "phonebook.hpp"
#include "Contact.hpp"

void pick_mode(std::string mode)
{
	std::cout << "What mode will you use?\n";
	std::cin >> mode;
}

int main(int argc, char **argv)
{
	(void)argv;
	Phonebook pbook;
	if (argc != 1)
	{
		std::cout << "Use ./phonebook";	
		return (-1);
	}
	int num_of_contacts = 0;
	std::string name;
	std::string mode;
	starting_text();
	while (1)
	{
		std::cin >> mode;
		if (mode == "ADD")
		{
			std::cout << "Add the info about this contact\n";
			// std::cin;
			std::getline(std::cin, name);
			std::cout << "New contact's name is " << name << "\n";
			if ( pbook.contact_counter() >= 8)
			{
				std::cout << "Too many contacts, exiting now\n";
				break;
			}
			num_of_contacts++;
			std::cout << "Num of contacts: " << num_of_contacts << "\n";
		}
		else if (mode == "SEARCH")
			search_function();
		else if (mode == "EXIT")
			return(exit_function(), 0);
		else
			std::cerr << "Mode selected was not valid, please select a valid mode\n";
	}
}
