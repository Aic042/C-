#include "phonebook.hpp"
#include "Contact.hpp"

void Phonebook::add()
{
	contacts[index].setContact();

	index++;
	number_of_contacts++;

	if (index == 8)
		index = 0;
	if (number_of_contacts > 8)
		number_of_contacts = 8;
}

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


void display_contact(Contact cont)
{
	std::cout << cont.
}