#include "phonebook.hpp"
#include "Contact.hpp"

void starting_text()
{
	std::cout << BOLD_ON << "What mode will you use?\n" << BOLD_OFF;
	std::cout << BOLD_ON << "Options are: Add, Exit and Search\n" << BOLD_OFF;
}
void exit_function()
{
	std::cout << "Program is quiting, contacts will be lost forever\n";
}

void search_function()
{
	Phonebook pbook;
	// if() Number of contacts = 0, retornamos -1
	//	printf("No contacts added yet");
	std::cout << "Mode incomplete, please wait till we fix this issue\n";
}
