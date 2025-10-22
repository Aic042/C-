#include "lib.h"

void pick_mode(std::string mode)
{
	std::cout << "What mode will you use?\n";
	std::cin >> mode;
}

void add_mode(std::string)
{
	
}

int main(int argc, char **argv)
{
	int edad;
	int num_of_contacts = 0;
	std::string name;
	std::string mode;
	while (1)
	{
		// std::cout << "What mode will you use?\n";
		// std::cin >> mode;
		pick_mode(mode);
		if (mode == "add")
		{
			std::cout << "Add the info about this contact\n";
			std::cin >> name;
			std::cout << "New contact's name is " << name << "\n";
			if (num_of_contacts > 8)
			{
				std::cout << "Too many contacts, exiting now\n";
				break;
			}
			num_of_contacts++;
			std::cout << "Num of contacts: " << num_of_contacts << "\n";
		}
		else if (mode == "search")
		{
			std::cout << "Mode incomplete, please wait till we fix this issue\n";
		}
		else if (mode == "exit")
		{
			std::cout << "Program is quiting, contacts will be lost forever\n";
			return 0;		
		}
		else
		{
			std::cout << "Mode selected was not valid, please select a valid mode\n";
		}
	}
}