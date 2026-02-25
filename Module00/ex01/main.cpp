#include "lib.hpp"

void pick_mode(std::string mode)
{
	std::cout << "What mode will you use?\n";
	std::cin >> mode;
}
void starting_text()
{
	std::cout << BOLD_ON << "What mode will you use?\n" << BOLD_OFF;
	std::cout << BOLD_ON << "Options are: Add, Exit and Search\n" << BOLD_OFF;
}

int main(int argc, char **argv)
{
	(void)argv;
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
			std::cin;
			std::getline(std::cin, name);
			std::cout << "New contact's name is " << name << "\n";
			if (num_of_contacts >= 8)
			{
				std::cout << "Too many contacts, exiting now\n";
				break;
			}
			num_of_contacts++;
			std::cout << "Num of contacts: " << num_of_contacts << "\n";
		}
		else if (mode == "SEARCH")
		{
			std::cout << "Mode incomplete, please wait till we fix this issue\n";
		}
		else if (mode == "EXIT")
		{
			std::cout << "Program is quiting, contacts will be lost forever\n";
			return 0;	
		}
		else
		{
			std::cerr << "Mode selected was not valid, please select a valid mode\n";
		}
	}
}
