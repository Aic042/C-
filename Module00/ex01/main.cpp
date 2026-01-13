#include "lib.h"

void pick_mode(std::string mode)
{
	std::cout << "What mode will you use?\n";
	std::cin >> mode;
}

void search_display(std::string)
{
	
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int num_of_contacts = 0;
	std::string name;
	std::string mode;
	char **name_list = NULL;
	while (1)
	{
		std::cout << "What mode will you use?\n";
		std::cin >> mode;
		// pick_mode(mode); // Falla 
		if (mode == "add")
		{
			std::cout << "Add the info about this contact\n";
			std::cin >> name;
			std::cout << "New contact's name is " << name << "\n";
			name = name_list[num_of_contacts];
			if (num_of_contacts >= 8)
			{
				std::cout << "Too many contacts, exiting now\n";
				break;
			}
			num_of_contacts++;
			printf("last name added is %s\n",name_list[num_of_contacts]);
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
			std::cerr << "Mode selected was not valid, please select a valid mode\n";
		}
	}
}
