#include "phonebook.hpp"
#include "Contact.hpp"


// int is_number(std::string &str)
// {
// 	if(str.empty())
// }

int main(int argc, char **argv)
{
	(void)argv;
	Phonebook pbook;
	if (argc != 1)
	{
		std::cout << "Use ./phonebook";	
		return (-1);
	}
	std::string name;
	std::string mode;
	starting_text();
	while (1)
	{
		std::cout << "> ";
		mode = get_non_empty_input("Mode: ");
		if (mode == "ADD")
			pbook.add();
		else if (mode == "SEARCH")
			pbook.search();
		else if (mode == "EXIT")
			return (exit_function(), 0);
		else
			std::cerr << "Mode selected was not valid\n";
	}
}
